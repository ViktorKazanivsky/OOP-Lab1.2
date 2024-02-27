// Droby.cpp
#include "Droby.h"
#include <iostream>

Droby::Droby() : numer(0), denom(1) {}

bool Droby::Init(int numerator, int denominator) {
    if (denominator == 0) {
        std::cerr << " denominator cannot be zero." << std::endl;
        return false;
    }

    numer = numerator;
    denom = denominator;

    return true;
}

void Droby::Read() {
    std::cout << " numerator: ";
    std::cin >> numer;

    std::cout << " denominator: ";
    std::cin >> denom;

    if (denom == 0) {
        std::cerr << " denominator cannot be zero." << std::endl;
        exit(EXIT_FAILURE);
    }
}

void Droby::Display() const {
    std::cout << numer << "/" << denom << " ";
}

void Droby::Simplify() {
    // Знаходження найбільшого спільного дільника 
    int gcd = 1; // НСД = gcd
    int smaller = (numer < denom) ? numer : denom; // Визначення меншого з двох чисел

    // Цикл пошуку найбільшого спільного дільника
    for (int i = 2; i <= smaller; ++i) {
        // Перевірка, чи i є дільником обох чисел
        if (numer % i == 0 && denom % i == 0) {
            // Якщо так, оновлюємо значення НСД
            gcd = i;
        }
    }

    // Скорочення чисельника та знаменника на НСД
    if (gcd > 1) {
        numer /= gcd; // Ділимо чисельник на НСД
        denom /= gcd; // Ділимо знаменник на НСД
    }
}

double Droby::CalculateValue() const {
    return static_cast<double>(numer) / denom;
}

// Геттери та сеттери
int Droby::GetNumerator() const {
    return numer;
}

int Droby::GetDenominator() const {
    return denom;
}

void Droby::SetNumerator(int numerator) {
    numer = numerator;
}

void Droby::SetDenominator(int denominator) {
    if (denominator == 0) {
        std::cerr << "Denominator cannot be zero." << std::endl;
        exit(EXIT_FAILURE);
    }
    denom = denominator;
}