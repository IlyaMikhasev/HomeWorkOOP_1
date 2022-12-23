#pragma once
class Fraction
{
public:
	Fraction(int numerator, int denominator);
	Fraction(const Fraction& fr);
	int getDenominator();
	void setDenominator(int denominator);
	int getNumerator();
	void setNumerator(int numerator);
	Fraction& operator+=(const Fraction& fr);
	Fraction& operator+(const Fraction& fr);
	Fraction& operator-=(const Fraction& fr);
	Fraction& operator-(const Fraction& fr);
	Fraction& operator*=(const Fraction& fr);
	Fraction& operator*(const Fraction& fr);
	Fraction& operator/=(const Fraction& fr);
	Fraction& operator/(const Fraction& fr);
private:
	int _denominator;
	int _numerator;
};

