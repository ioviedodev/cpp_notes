#include "Rational.h"
#include "Num.h"
#include <iostream>
#include <string>

using std::string;

int main()
{
	Num number1(3);
	std::cout << "number1: " << std::to_string(number1.getValue()) << std::endl;
	Num number2=number1++;
	std::cout << "number1: " << std::to_string(number1.getValue()) << std::endl;
	std::cout << "number2: " << std::to_string(number2.getValue()) << std::endl;
	number2=++number1;
	std::cout << "number1: " << std::to_string(number1.getValue()) << std::endl;
	std::cout << "number2: " << std::to_string(number2.getValue()) << std::endl;

	--number1;
	std::cout << "--number1: " << std::to_string(number1.getValue()) << std::endl;

	/*Rational a(5, 10);
	Rational b(3, 10);
	string message = "Hola mundo ";
	std::cout << "a: " << a.raw_str() << std::endl;
	std::cout << "b: " << b.raw_str() << std::endl;

	Rational c = b.reduce();
	std::cout << "c: " << c.raw_str() << std::endl;
	Rational d;
	d = b;
	std::cout << "d: " << (d).raw_str() << std::endl;
	d.set_numerator(7);
	std::cout << "d: " << (d).raw_str() << std::endl;
	std::cout << "b: " << (b).raw_str() << std::endl;
	b.set_numerator(1);
	std::cout << "b: " << (b).raw_str() << std::endl;
	std::cout << "d: " << (d).raw_str() << std::endl;

	std::cout << "a+b: " << (a + b).raw_str() << std::endl;
	std::cout << "b+a: " << (b + a).raw_str() << std::endl;
	std::cout << "a-b: " << (a - b).raw_str() << std::endl;
	std::cout << "a*b: " << (a * b).raw_str() << std::endl;
	std::cout << "a/b: " << (a / b).raw_str() << std::endl;

	std::cout << "a+14: " << (a + 14).raw_str() << std::endl;
	std::cout << "14+a: " << (14 + a).raw_str() << std::endl;

	message += a;

	std::cout << message << std::endl;*/

	return 0;
}