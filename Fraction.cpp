#include "Fraction.h"
#include <iostream>
Fraction::Fraction(int numerator, int denominator) :_numerator(numerator), _denominator(denominator) {
	if (denominator == 0)
		std::cout << "Недопустимое значение знаменателя!"<<std::endl;
}
Fraction::Fraction(const Fraction& fr) : _numerator(fr._numerator), _denominator(fr._denominator) {}

int Fraction::getDenominator() {
	return _denominator;
}
void Fraction::setDenominator(int denominator) {
	_denominator = denominator;
}
int Fraction::getNumerator() {
	return _numerator;
}
void Fraction::setNumerator(int numerator) {
	_numerator = numerator;
}
Fraction& Fraction::operator+=(const Fraction& fr)
{
	_numerator = _numerator * fr._denominator + _denominator * fr._numerator;
	_denominator *= fr._denominator;
	return *this;
}
Fraction& Fraction::operator+(const Fraction& fr) {
	Fraction res(*this);
	res += fr;
	return res;
}
Fraction& Fraction::operator-=(const Fraction& fr)
{
	_numerator = _numerator * fr._denominator - _denominator * fr._numerator;
	_denominator *= fr._denominator;
	return *this;
}
Fraction& Fraction::operator-(const Fraction& fr) {
	Fraction res(*this);
	res -= fr;
	return res;
}
Fraction& Fraction::operator*(const Fraction& fr)
{
	Fraction res(*this);
	res._numerator *= fr._numerator;
	res._denominator *= fr._denominator;
	return res;
}
Fraction& Fraction::operator/(const Fraction& fr) {
	Fraction res(*this);
	res._numerator *= fr._denominator;
	res._denominator *= fr._numerator;	
	return res;
}