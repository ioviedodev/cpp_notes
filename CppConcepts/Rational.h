#ifndef RATIONAL_H
#define RATIONAL_H

#include <string>
#include <iostream>

using std::string;
const string nanstr{ "[NAN]" };

class Rational {
	int n{ 0 };
	int d{ 1 };
public:
	Rational(int numerator = 0, int denominator = 1) : n(numerator), d(denominator) {}
	Rational(const Rational& rhs) : n(rhs.n), d(rhs.d) {}
	~Rational();
	void set_numerator(int _numerator) { n = _numerator; };
	int numerator() const { return n; };
	int denominator() const { return d; };
	Rational reduce() const; //reduce fraction
	string str() const; // return a formatted STL string
	string raw_str() const; // return a non-reduce STL string

	Rational& operator = (const Rational&); // assigment
	//Rational operator + (const Rational&) const;
	Rational operator - (const Rational&) const;
	Rational operator * (const Rational&) const;
	Rational operator / (const Rational&) const;
	operator string() { return raw_str(); };
};

Rational Rational::reduce() const {
	if (n == 0) return *this;
	for (auto div = d - 1; div; --div) {
		if (n % div == 0 && d % div == 0) {
			return Rational(n / div, d / div);
		}
	}
	return *this;
}

string Rational::str() const {
	if (d == 0) return nanstr;
	if (d == 1 || n == 0) return std::to_string(n);

	auto abs_n = abs(n);
	if (abs_n > d) {
		auto whole = n / d;
		auto remainder = abs_n % d;

		if (remainder) return std::to_string(whole) + " " + Rational(remainder, d).str();
		else return std::to_string(whole);
	}
	else
	{
		return reduce().raw_str();
	}
}

string Rational::raw_str() const {
	return std::to_string(n) + "/" + std::to_string(d);
}

Rational& Rational::operator= (const Rational& rhs) {
	if (this != &rhs) {
		n = rhs.numerator();
		d = rhs.denominator();
	}
	return *this;
}

//Rational Rational::operator+ (const Rational& rhs) const {
//	return Rational((n * rhs.d) + (d * rhs.n), d * rhs.d);
//}

Rational Rational::operator- (const Rational& rhs) const {
	return Rational((n * rhs.d) - (d * rhs.n), d * rhs.d);
}

Rational Rational::operator* (const Rational& rhs) const {
	return Rational((n * rhs.n), d * rhs.d);
}

Rational Rational::operator/ (const Rational& rhs) const {
	return Rational((n * rhs.d), d * rhs.n);
}

Rational::~Rational() {
	n = 0; d = 1;
}

Rational operator + (const Rational& lhs, const Rational& rhs) {
	return Rational((lhs.numerator() * rhs.denominator()) + (lhs.denominator() * rhs.numerator()), lhs.denominator() * rhs.denominator());
}

#endif
