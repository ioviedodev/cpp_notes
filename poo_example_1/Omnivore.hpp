#ifndef OMNIVORE_HPP
#define OMNIVORE_HPP
#include"Animal.hpp"
#include"Carnivorous.hpp"
#include"Herbivorous.hpp"

class Omnivore : public Herbivorous, public Carnivorous
{
public:
	Omnivore(): Herbivorous(), Carnivorous() {} //Todo check bug adding twice time animal to total count

	void Eat()
	{
		cout << "This animal eat any thing" << endl;
	}
};

#endif
