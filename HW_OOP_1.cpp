#include <iostream>
#include "Fraction.h"

int main() {
	setlocale(LC_ALL, "Russian");
	Fraction fr(2, 5);
	Fraction fr1(3, 5);
	Fraction result(1,1);
	result = fr1 + fr;
	std::cout << "Сумма дробей равна = " << result.getNumerator() << '/' << result.getDenominator() << '\n';
	result = fr1 - fr;
	std::cout << "Разница равна = " << result.getNumerator() << '/' << result.getDenominator() << '\n';
	result = fr1 * fr;
	std::cout << "Произведение дробей равно = " << result.getNumerator() << '/' << result.getDenominator() << '\n';
	result = fr1 / fr;
	std::cout << "Деление дробей равно = " << result.getNumerator() << '/' << result.getDenominator() << '\n';
	return 0;
}