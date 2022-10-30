
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>
#include<string>

using namespace std;

class Animal
{
private:
	static int NumberOfAnimals;
protected:
	string Food;
public:
	Animal();
	~Animal();

	static int GetNumberOfAnimals();
	string GetFood()
	{
		return this->Food;
	}
	void Eat()
	{
		cout << "This animal is eating: " << this->Food << endl;
	}

};


#endif 