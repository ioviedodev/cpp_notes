#ifndef HERBIVOROUS_HPP
#define HERBIVOROUS_HPP

#include"Animal.hpp"

class Herbivorous : public Animal
{
public:
	Herbivorous() : Animal()
	{
		this->Food = "herbs";
	}

	void Graze()
	{
		cout << "This animal is grazing" << endl;
	}
};
#endif