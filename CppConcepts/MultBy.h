#ifndef MULTBY_H
#define MULTBY_H

/*
* Examples of functors
*/

//functors
class MultBy {
	int mult{};
public:
	MultBy(int n) : mult(n) {};
	int operator () (int x) { return mult * x; };
};


#endif