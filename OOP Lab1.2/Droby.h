// Droby.h
#pragma once

class Droby {
private:
    int numer;
    int denom;

public:
    Droby();  // ����������� �� �������������
    bool Init(int numerator, int denominator);
    void Read();
    void Display() const;
    void Simplify();
    double CalculateValue() const;

    // ������ ������� (������� �� �������)
    int GetNumerator() const;
    int GetDenominator() const;
    void SetNumerator(int numerator);
    void SetDenominator(int denominator);
};