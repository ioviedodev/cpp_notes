#ifndef HERBIVOROUS_HPP
#define HERBIVOROUS_HPP

#include"Animal.hpp"

class Herbivorous : public Animal
{
public:
	int age;
	Herbivorous(int _age) : Animal()
	{
		this->age = _age;
		this->Food = "herbs";
	}

	void Graze()
	{
		cout << "This animal is grazing" << endl;
	}
};
#endif