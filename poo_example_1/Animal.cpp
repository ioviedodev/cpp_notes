#include"Animal.hpp"

int Animal::NumberOfAnimals = 0;

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

int Animal::GetNumberOfAnimals()
{
	return NumberOfAnimals;
}