#include <iostream>
#include "Fraction.h"

int main() {
	setlocale(LC_ALL, "Russian");
	Fraction fr(2, 5);
	Fraction fr1(3, 5);
	Fraction result(1,1);
	result = fr1 + fr;
	std::cout << "����� ������ ����� = " << result.getNumerator() << '/' << result.getDenominator() << '\n';
	result = fr1 - fr;
	std::cout << "������� ����� = " << result.getNumerator() << '/' << result.getDenominator() << '\n';
	result = fr1 * fr;
	std::cout << "������������ ������ ����� = " << result.getNumerator() << '/' << result.getDenominator() << '\n';
	result = fr1 / fr;
	std::cout << "������� ������ ����� = " << result.getNumerator() << '/' << result.getDenominator() << '\n';
	return 0;
}