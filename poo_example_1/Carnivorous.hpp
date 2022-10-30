#ifndef CARNIVOROUS_HPP
#define CARNIVOROUS_HPP

#include"Animal.hpp"

class Carnivorous : public Animal
{
public:
	Carnivorous() : Animal()
	{
		this->Food = "meat";
	}

	void Hunt()
	{
		cout << "This animal is hunting" << endl;
	}
};

#endif