// Source.cpp
#include "Droby.h"
#include <iostream>

// Зовнішня функція для створення об'єкту класу Droby
Droby makeDroby(int numerator, int denominator) {
    Droby drob;
    drob.Init(numerator, denominator);
    return drob;
}

int main() {
    int numerator, denominator;

    // Введення значень для чисельника та знаменника
    std::cout << "Enter numerator: ";
    std::cin >> numerator;

    std::cout << "Enter denominator: ";
    std::cin >> denominator;

    // Створення об'єкту за допомогою зовнішньої функції
    Droby drob = makeDroby(numerator, denominator);

    // Використовуйте методи класу Droby
    drob.Display();
    drob.Simplify();
    drob.Display();
    std::cout << "Value: " << drob.CalculateValue() << std::endl;

    return 0;
}