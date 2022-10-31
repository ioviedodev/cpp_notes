#include<iostream>
#include<string>
#include"Animal.hpp"
#include"Herbivorous.hpp"
#include"Carnivorous.hpp"
#include"Omnivore.hpp"

using namespace std;


void main()
{
	//Animal* animal1 = new Animal(); 
	//Animal* animal2 = new Animal();
	//Herbivorous* herb = new Herbivorous();
	//Carnivorous* carn = new Carnivorous();
	Omnivore* omn = new Omnivore();


	cout << "Number of animals: " << Animal::GetNumberOfAnimals() <<endl;

	/*animal1->Eat();
	animal2->Eat();
	herb->Graze();
	carn->Eat();
	carn->Hunt();*/

	cout << "Omnivore like carnivorous" << endl;
	/*omn->Carnivorous::Eat();*/
	omn->Eat();

	delete omn;
	cout << "Number of animals: " << Animal::GetNumberOfAnimals() << endl;
	//animal1->~Animal();
	//cout << "Number of animals: " << Animal::GetNumberOfAnimals() << endl;
	//animal2->~Animal();
	//cout << "Number of animals: " << Animal::GetNumberOfAnimals() << endl;
}