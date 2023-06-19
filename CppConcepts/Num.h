#ifndef NUM_H
#define NUM_H

class Num {
	int value;
public:
	Num(int x = 0) : value{x} {};
	int getValue() const { return value; };
	void setValue(int x ) { value = x; }

	Num& operator++ ();
	Num operator++ (int);
	Num& operator-- ();
	Num operator-- (int);
};

Num& Num::operator++ () {
	printf("pre-increment: ");
	value += 1;
	return *this;
}

Num Num::operator++ (int) {
	printf("post-increment: ");
	auto temp = *this;
	value += 1;
	return temp;
}

Num& Num::operator-- () {
	printf("pre-increment: ");
	value -= 1;
	return *this;
}

Num Num::operator-- (int) {
	printf("post-increment: ");
	auto temp = *this;
	value -= 1;
	return temp;
}
#endif
