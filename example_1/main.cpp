#include <math.h>
#include <iostream>
#include <string>

//#define def_several_basic_concepts
//#define def_mathematical_calculations
//#define def_conditional_example
#define def_conditional_challenge


#ifdef def_mathematical_calculations
#define pi 3.141592
#endif

#ifdef def_conditional_challenge
#define MAX_RETRIES 3
#endif

using namespace std;


void main()
{
#ifdef def_several_basic_concepts
#pragma region several_basic_concepts 

	cout << "Examples of pointers" << endl;

	cout << "	   \****__              ____             " << endl;
	cout << "		 |    *****\_      --/ *\-__         " << endl;
	cout << "		 /_          (_    ./ ,/----'        " << endl;
	cout << "Art by     \__         (_./  /              " << endl;
	cout << " Ironwing     \__           \___----^__     " << endl;
	cout << "			   _/   _                  \"    " << endl;
	cout << "		|    _/  __/ )\"\ _____         *\"  " << endl;
	cout << "		|\__/   /    ^ ^       \____      )  " << endl;
	cout << "		 \___--""                    \_____ )" << endl;

	bool result;
	int number = 5;
	float decimal = 3.3;
	char character = 'p';

	void* genericPointer = nullptr;
	int* ptr_number = nullptr;
	ptr_number = &number;
	genericPointer = (void*)ptr_number;
	*ptr_number = 13;

	cout << "*ptr_number: " << *ptr_number << endl;

	cout << "number: " << number << endl;
	cout << "decimal: " << decimal << endl;
	cout << "Total: {number+decimal} " << decimal + (float)number << endl;
	cout << "Total: {number-decimal} " << decimal - (float)number << endl;
	cout << "Total: {number*decimal} " << decimal * (float)number << endl;
	cout << "Total: {number/decimal} " << decimal / (float)number << endl;
	cout << "Is even: " << (5 % 2 == 0 ? true : false) << endl;


	result = false;
	cout << "Value of result: " << result << endl;
	result = !result;
	cout << "Value of result: " << result << endl;

	cout << 10 << endl;
	cout << 3.1415f << endl;
	cout << 'h' << endl;
	cout << true << endl;
	cout << "hola mundo" << endl;

	cout << true << endl;

	cout << "character: " << character << endl;
#pragma endregion
#endif

#ifdef def_mathematical_calculations
#pragma region def_mathematical_calculations 
	char option = '1';
	float area = 0;
	float radio = 0;

	do {
		cout << "Welcome to the calculation programm " << endl;
		cout << "Options " << endl;
		cout << "1) Calculate area of a circle " << endl;
		cout << "2) Calculate area of a sphere " << endl;
		cout << "3) Exit " << endl;
		cout << "Please enter the option: " << endl;
		cin >> option;
		switch (option)
		{
		case '1':
			cout << "Please input the radio: " << endl;
			cin >> radio;
			area = pi * (pow(radio, 2));
			cout << "The area of the circle is: " << area << endl;
			break;
		case '2':
			cout << "Please input the radio: " << endl;
			cin >> radio;
			area = 4*pi * (pow(radio, 2));
			cout << "The area of the sphere is: " << area << endl;
			break;
		case '3':
			cout << "Closing application" << endl;
			break;
		default:
			break;
		}
	} while (option!='3');

#pragma endregion
#endif

#ifdef def_conditional_example
#pragma region def_mathematical_calculations 
	char option = '1';
	int hide_number = 15;
	int user_number = 0;

	do {
		cout << "Welcome to guess the number programm " << endl;
		cout << "Options " << endl;
		cout << "1) Want to guess number input 1 " << endl;
		cout << "2) Exit " << endl;
		cout << "Please enter the option: " << endl;
		cin >> option;
		switch (option)
		{
		case '1':
			cout << "Please input the number: " << endl;
			cin >> user_number;
			if (user_number > hide_number)
			{
				cout << "Please insert a lower number" << endl;
			}
			else if(user_number == hide_number)
			{
				cout << "Correct you guessed the number!!" << endl;
			}
			else
			{
				cout << "Please insert a greater number" << endl;
			}
			break;
		case '2':
			cout << "Closing application" << endl;
			break;
		default:
			break;
		}
	} while (option != '2');
#pragma endregion
#endif

#ifdef def_conditional_challenge
	char option = '1';
	int hide_number = 15;
	int user_number = 0;
	int number_of_retries = 1;
	string story="";
	string user_unput = "";

	story = "Ecuador has many diffent options to offer tourist because it has different weather and regions.";
	cout << "Welcome to this programm which create a story according to the character(choices) that the user." << endl;
	cout << story << endl<< endl;
	cout << "Options: " << endl;

	do {
		
		cout << "Please insert a character: " << endl;
		cin >> option;
		if (option == 'a')
		{
			story += "Cost region let the tourist explore amazing beaches, which are almost virgin and with different funny activities with low cost.";
			cout << story << endl;
		}
		else if (option == 'b')
		{
			story += "Highland let the tourist walking for different montains and see differents kinds of animals like Condor";
			cout << story << endl;
		}
		else if (option == 'c')
		{
			story += "Amazonia is the best option for people which love the ancient culture and adventure activities which take places along the rivers.";
			cout << story << endl;
		}
		else if (option == 'd')
		{
			story += "Galapagos island fit for the people who want to look species that change in a such way that are different from others.";
			cout << story << endl;
		}
		else
		{
			number_of_retries += 1;
			cout << "Continue guessing" << endl;
		}

	} while (number_of_retries < MAX_RETRIES);

	if (number_of_retries == MAX_RETRIES)
		cout << "SORRY, GAME OVER!!" << endl;
	else
		cout << "GREAT JOB, YOU WIN!!" << endl;

#endif
}