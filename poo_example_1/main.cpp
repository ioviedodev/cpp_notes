#include<iostream>
#include<string>
#include"Animal.hpp"
#include"Herbivorous.hpp"
#include"Carnivorous.hpp"
#include"Omnivore.hpp"
#include <map>

using namespace std;


void main()
{
	map<uint8_t, void (*)()> interrupt_func_map;
	//Animal* animal1 = new Animal(); 
	//Animal* animal2 = new Animal();
	//Herbivorous* herb = new Herbivorous();
	//Carnivorous* carn = new Carnivorous();
	Omnivore* omn = new Omnivore();
	Herbivorous* testNew = new Herbivorous(5);
	Herbivorous* test, *test1;

	test = (Herbivorous*)calloc(1, sizeof(Herbivorous));
	
	test1 = (Herbivorous*)malloc(sizeof(Herbivorous));
	//cout << "Number of animals: " << Animal::GetNumberOfAnimals() <<endl;

	///*animal1->Eat();
	//animal2->Eat();
	//herb->Graze();
	//carn->Eat();
	//carn->Hunt();*/

	//cout << "Omnivore like carnivorous" << endl;
	///*omn->Carnivorous::Eat();*/
	//omn->Eat();

	//delete omn;
	//cout << "Number of animals: " << Animal::GetNumberOfAnimals() << endl;
	////animal1->~Animal();
	////cout << "Number of animals: " << Animal::GetNumberOfAnimals() << endl;
	////animal2->~Animal();
	////cout << "Number of animals: " << Animal::GetNumberOfAnimals() << endl;
}