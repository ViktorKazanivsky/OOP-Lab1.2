// Source.cpp
#include "Droby.h"
#include <iostream>

// ������� ������� ��� ��������� ��'���� ����� Droby
Droby makeDroby(int numerator, int denominator) {
    Droby drob;
    drob.Init(numerator, denominator);
    return drob;
}

int main() {
    int numerator, denominator;

    // �������� ������� ��� ���������� �� ����������
    std::cout << "Enter numerator: ";
    std::cin >> numerator;

    std::cout << "Enter denominator: ";
    std::cin >> denominator;

    // ��������� ��'���� �� ��������� �������� �������
    Droby drob = makeDroby(numerator, denominator);

    // �������������� ������ ����� Droby
    drob.Display();
    drob.Simplify();
    drob.Display();
    std::cout << "Value: " << drob.CalculateValue() << std::endl;

    return 0;
}