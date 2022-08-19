#include<iostream>
#include<string>
using namespace  std;



struct Person
{
	string name;
	int age;
};

struct bit_control
{

	uint8_t compress : 1;
	uint8_t encripted : 1;
	uint8_t fragment : 1;
	uint8_t future : 5;
};

union control_flag
{
	uint8_t			control;
	bit_control		bit_control;
};

enum class architecture { architecture_x8, architecture_x16, architecture_x32, architecture_x64 };

int main()
{
	
	Person *ptr_person_1;
	Person* ptr_person_2;
	Person person = Person();
	control_flag control_flag_1 = { 0x05 };


	architecture architec = architecture::architecture_x32;




	cout << "control: "		<< control_flag_1.control				<< endl;
	cout << "future: "		<< control_flag_1.bit_control.future	<< endl;
	cout << "compress: "	<< control_flag_1.bit_control.compress	<< endl;
	cout << "encripted: "	<< control_flag_1.bit_control.encripted	<< endl;
	cout << "fragment: "	<< control_flag_1.bit_control.fragment	<< endl;



	ptr_person_2 = (Person*)calloc(1,sizeof(Person));

	char word = 'A';
	char phrase1[] = "hola";
	char *phrase2 = (char*)"hola";
	char* pword = &word;


	ptr_person_1 = new Person();
	person.name = "Ivan";
	person.age = 25;

	ptr_person_1->name = "Natalia";
	ptr_person_1->age = 24;

	cout << "\n";
	cout << word;
	cout << "\n";
	cout << (int *)&word;
	cout << "\n";
	cout << (int *)pword;
	cout << "\n";
	cout << (int*)&pword;
}