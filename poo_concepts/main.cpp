#include<iostream>
#include<string>

using namespace std;

class People
{
private:
	string Name ;
	int Age;

public:
	static int NumberOfPeople;

	People(string name, int age);

	//People(string name, int age)
	//{
	//	this->Name = name;
	//	this->Age = age;
	//}

	//People(string name, int age): Name(name), Age(age)
	//{
	//}

	~People()
	{
		// free memory in case you allocate dynamic memory 
		cout << "Destroy" << endl;
	}

	void set_name(string name)
	{
		this->Name = name;
	}



	void set_age(int age)
	{
		this->Age = age;
	}

	void greeting()
	{
		cout << Name << endl;
	}

	static void print_number_of_people()
	{
		cout << "Number of People: " << NumberOfPeople << endl;
	}
};

int People::NumberOfPeople = 0;

People::People(string name, int age)
{
	this->Name = name;
	this->Age = age;
	NumberOfPeople += 1;
}

int main()
{
	Animal pity = Animal();

	People people = People("Ivan", 31);
	People* ptr_people = new People("Daniel",28);

	people.greeting();
	ptr_people->greeting();

	ptr_people->set_name("Ivan");

	People::print_number_of_people();


	people.greeting();
	ptr_people->greeting();

	delete ptr_people;
}