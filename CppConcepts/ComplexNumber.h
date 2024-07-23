#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

#include <string>
#include <iostream>

using std::string;


class COMPLEX_NUMBER
{
public:
	int real;
	int imaginary;
	COMPLEX_NUMBER(){real = 0; imaginary = 0;};
	COMPLEX_NUMBER(int _real){real = _real; imaginary = 0;};
	COMPLEX_NUMBER(int _real, int _imaginary) : real(_real) , imaginary(_imaginary) {  };
	COMPLEX_NUMBER(const COMPLEX_NUMBER& rhs) : real (rhs.real) , imaginary(rhs.imaginary) { };

	COMPLEX_NUMBER& operator= (const COMPLEX_NUMBER&);  
	COMPLEX_NUMBER& operator+= (const COMPLEX_NUMBER&);
	//COMPLEX_NUMBER operator+ (const COMPLEX_NUMBER&) const;
	COMPLEX_NUMBER operator- (const COMPLEX_NUMBER&) const;
	COMPLEX_NUMBER operator* (const COMPLEX_NUMBER&) const;

	string str() const;

private:

};

COMPLEX_NUMBER operator + (const COMPLEX_NUMBER& lhs, const COMPLEX_NUMBER& rhs) {
	return COMPLEX_NUMBER(lhs.real + rhs.real, lhs.imaginary + rhs.imaginary);
}

COMPLEX_NUMBER& COMPLEX_NUMBER::operator= (const COMPLEX_NUMBER& rhs) {
	if (this != &rhs)
	{
		real = rhs.real;
		imaginary = rhs.imaginary;
	}
	return *this;
}

COMPLEX_NUMBER& COMPLEX_NUMBER::operator+= (const COMPLEX_NUMBER& rhs) {
	real += rhs.real;
	imaginary += rhs.imaginary;
	return *this;
}

//COMPLEX_NUMBER COMPLEX_NUMBER::operator + (const COMPLEX_NUMBER& rhs) const {
//	return COMPLEX_NUMBER(real + rhs.real, imaginary + rhs.imaginary);
//}

COMPLEX_NUMBER COMPLEX_NUMBER::operator - (const COMPLEX_NUMBER& rhs) const {
	return COMPLEX_NUMBER(real - rhs.real, imaginary - rhs.imaginary);
}

COMPLEX_NUMBER COMPLEX_NUMBER::operator * (const COMPLEX_NUMBER& rhs) const {
	return COMPLEX_NUMBER((real * rhs.real) - (imaginary *rhs.imaginary), (real*rhs.imaginary + imaginary*rhs.real));
}

string COMPLEX_NUMBER::str() const {
	string number = std::to_string(real);
	number += imaginary > 0 ? "+": "";
	number += std::to_string(imaginary) + "i";
	return number;
}


#endif
