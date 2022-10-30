#include<iostream>
#include<string>
#include"Animal.hpp"
#include"Herbivorous.hpp"
#include"Carnivorous.hpp"

using namespace std;


void main()
{
	Animal *animal1 = new Animal(), *animal2 = new Animal();
	Herbivorous* herb = new Herbivorous();
	Carnivorous* carn = new Carnivorous();

	cout << "Number of animals: " << Animal::GetNumberOfAnimals() <<endl;

	animal1->Eat();
	animal2->Eat();
	herb->Graze();
	carn->Eat();
	carn->Hunt();

	delete herb;
	cout << "Number of animals: " << Animal::GetNumberOfAnimals() << endl;
	animal1->~Animal();
	cout << "Number of animals: " << Animal::GetNumberOfAnimals() << endl;
	animal2->~Animal();
	cout << "Number of animals: " << Animal::GetNumberOfAnimals() << endl;
}