#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>
#include<string>

using namespace std;

class Animal {
protected:
	static int NumberOfAnimals;
	string Food;
public:

	Animal();
	~Animal();
	static int getNumberOfAnimals() {
		cout << "Numbers of animals: " << NumberOfAnimals << endl;
	}

	void feeding() {
		cout << "This animal is feeding: " << Food << endl;
	}
};

Animal::Animal()
{
	cout << "Creating animal " << endl;
	NumberOfAnimals += 1;
}

Animal::~Animal()
{
	cout << "Deleting animal " << endl;
	NumberOfAnimals -= 1;
}

#endif