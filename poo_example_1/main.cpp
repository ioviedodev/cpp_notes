#include<iostream>
#include<string>
#include"Animal.hpp"
#include"Herbivorous.hpp"

using namespace std;


void main()
{
	Animal *animal1 = new Animal(), *animal2 = new Animal();
	Herbivorous* herb = new Herbivorous();

	cout << "Number of animals: " << Animal::GetNumberOfAnimals() <<endl;

	animal1->Eat();
	animal2->Eat();
	herb->Graze();

	//herb->~Animal();
	cout << "Number of animals: " << Animal::GetNumberOfAnimals() << endl;
	animal1->~Animal();
	cout << "Number of animals: " << Animal::GetNumberOfAnimals() << endl;
	animal2->~Animal();
	cout << "Number of animals: " << Animal::GetNumberOfAnimals() << endl;
}