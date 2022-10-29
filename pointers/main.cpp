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

union number_letter
{
	char letter;
	uint8_t ascii_number;
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
	Person& ref_person= person;
	control_flag control_flag_1 = { 0x05 };

	number_letter variable = { 'a' };
	variable.ascii_number = 98;
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

	//cout << "\n";
	//cout << word;
	//cout << "\n";
	//cout << (int *)&word;
	//cout << "\n";
	//cout << (int *)pword;
	//cout << "\n";
	//cout << (int*)&pword;

	cout << "Printing ptr_person_1 information \n";
	cout << "Age: " << ptr_person_1->age << endl;
	cout << "Name: " << ptr_person_1->name << endl;
	cout << "\n";

	cout << "Printing person information \n";
	cout << "Age: " << person.age << endl;
	cout << "Name: " << person.name << endl;
	cout << "\n";

	ref_person.name = "Oviedo";
	ref_person.age = 31;

	cout << "Printing was change ref person information \n";
	cout << "Age: " << person.age << endl;
	cout << "Name: " << person.name << endl;
	cout << "\n";

	cout << "Printing ptr_person_1 memory information \n";
	cout << "&ptr_person_1: " << (int *)&ptr_person_1 << endl;
	cout << "ptr_person_1: " << (int*)ptr_person_1 << endl;
	cout << "\n";

	//variable
	cout << "Variable information \n";
	cout << "letter: " << variable.letter  << endl;
	cout << "ascii_number: " << (int)variable.ascii_number << endl;
	cout << "\n";

	cout << "Architecture information \n";
	cout << "architec: " << (int)architec << endl;
	cout << "\n";
}