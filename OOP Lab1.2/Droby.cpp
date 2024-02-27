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
    // ����������� ���������� �������� ������� 
    int gcd = 1; // ��� = gcd
    int smaller = (numer < denom) ? numer : denom; // ���������� ������� � ���� �����

    // ���� ������ ���������� �������� �������
    for (int i = 2; i <= smaller; ++i) {
        // ��������, �� i � �������� ���� �����
        if (numer % i == 0 && denom % i == 0) {
            // ���� ���, ��������� �������� ���
            gcd = i;
        }
    }

    // ���������� ���������� �� ���������� �� ���
    if (gcd > 1) {
        numer /= gcd; // ĳ���� ��������� �� ���
        denom /= gcd; // ĳ���� ��������� �� ���
    }
}

double Droby::CalculateValue() const {
    return static_cast<double>(numer) / denom;
}

// ������� �� �������
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