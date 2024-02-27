// Droby.h
#pragma once

class Droby {
private:
    int numer;
    int denom;

public:
    Droby();  // конструктор за замовчуванням
    bool Init(int numerator, int denominator);
    void Read();
    void Display() const;
    void Simplify();
    double CalculateValue() const;

    // методи доступу (геттери та сеттери)
    int GetNumerator() const;
    int GetDenominator() const;
    void SetNumerator(int numerator);
    void SetDenominator(int denominator);
};