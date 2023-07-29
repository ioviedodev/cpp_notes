#include "Rational.h"
#include "Num.h"
#include <iostream>
#include <string>
#include "container.h"
#include "MultBy.h"
#include <algorithm>
#include <iostream>
#include <functional>

//#define opeator_overload
//#define increment_decrement
//#define functors
//#define move_constructor
#define lambda
using std::string;
using namespace std;

int main()
{
#ifdef lambda

	uint8_t data_rx[] = { 0x05,0x00, 0x11,0x32, 0xa1, 0x65, 0x11 };
	uint16_t size = sizeof(data_rx);

	auto printNumber = [](uint8_t number)->void { printf("%i, ", number); };

	auto get_n_element = [&](int index)->uint8_t {
		if (index < size) {
			return data_rx[index];
		}
		else {
			return 0;
		}
	};

	auto sumar = [](int a, int b) ->int {return a + b; };
	printf("\sumar: %i\n", sumar(5, 3));

	int divisor = 2;
	int number = 6;
	auto divisionBy2 = [divisor](int a) ->float {return (a / divisor); };
	printf("\number: %i divisionBy2: %f\n", number, divisionBy2(number));
	uint8_t element = 2;
	printf("\get_n_element[%i]: %i\n", element, get_n_element(element));

	std::vector<int> dataNumbers = { 5,3,2,8,16,24,36 };
	std::vector<int> dataOdd{};

	auto isOdd = [](int _number) {return _number % 2 == 0; };
	//Case of use: Predicates
	auto count = std::count_if(dataNumbers.begin(), dataNumbers.end(), isOdd);

	//Case of use: Predicates
	std::copy_if(dataNumbers.begin(), dataNumbers.end(), std::back_inserter(dataOdd), isOdd);

	printf("\ndataNumbers: ");
	//Case of use: Predicates
	std::for_each(dataNumbers.begin(), dataNumbers.end(), printNumber);
	printf("\n");
	printf("\dataOdd: ");
	//Case of use: Predicates
	std::for_each(dataOdd.begin(), dataOdd.end(), printNumber);
	printf("\n");

	printf("count: %i", count);


	string message{ "welcome to the biggest event about technology which shows the lastest news." };
	string messageConvert1{};
	string messageConvert2{};
	string messageConvert3{};

	printf("\nmessage: %s\n", message.c_str());

	auto upper = [](char _character) -> char {
		if (_character >= 'a' && _character <= 'z')
		{
			_character = _character - ('a' - 'A');
		}
		return _character;
	};

	auto lower = [](char _character) -> char {
		if (_character >= 'A' && _character <= 'Z')
		{
			_character = _character - ('A' - 'a');
		}
		return _character;
	};
	auto tittleCase = [&upper](char _character) -> char {
		static char lastChar = ' ';
		char newChar{ lastChar == ' ' ? upper(_character) : _character };
		lastChar = _character;
		return newChar;
	};

	std::transform(message.begin(), message.end(), std::back_inserter(messageConvert1), upper);
	printf("\nmessageConvert1: %s\n", messageConvert1.c_str());

	std::transform(messageConvert1.begin(), messageConvert1.end(), std::back_inserter(messageConvert2), lower);
	printf("\nmessageConvert2: %s\n", messageConvert2.c_str());

	std::transform(message.begin(), message.end(), std::back_inserter(messageConvert3), tittleCase);
	printf("\nmessageConvert3: %s\n", messageConvert3.c_str());

	int sizeBuffer = 1024;
	char* cadena = (char*)calloc(1, 1024);

	//ok
	//auto functionA = [sizeBuffer](char * _cadena) {
	//	const char* messageTmp = "function A";
	//	//memcpy_s(_cadena, sizeBuffer, messageTmp, strlen(messageTmp));
	//	strcpy_s(_cadena, sizeBuffer, messageTmp);
	//};
	//functionA(cadena);

	//ok
	//auto functionA = [&] {
	//	const char* messageTmp = "function A";
	//	strcpy_s(cadena, sizeBuffer, messageTmp);
	//};
	//functionA();
	//printf("\n\n CADENA!!!!!!: %s", cadena);

	//using functionGeneric = const char* (*)();
	using functionGeneric = std::function<const char *()>;

	auto functionA = [] {
		const char* messageTmp = "function A";
		return messageTmp;
	};
	auto functionB = [] {
		const char* messageTmp = "function B";
		return messageTmp;
	};
	auto functionC = [] {
		const char* messageTmp = "function C";
		return messageTmp;
	};
	auto functionD = [] {
		const char* messageTmp = "function C";
		return messageTmp;
	};

	auto callFunction = [](functionGeneric _funcGeneric)
	{
		printf("\n%s", _funcGeneric());
	};

	/*auto generic = [&upper,&callFunction,&functionA, &functionB, &functionC, &functionD](char _char)
	{
		const char* result;
		if ((_char == 'A' || upper(_char) == 'A') || (_char == 'B' || upper(_char) == 'B') || (_char == 'C' || upper(_char) == 'C') || (_char == 'D' || upper(_char) == 'D'))
		{
			switch (_char)
			{
			case 'A':
				callFunction(functionA);
				break;
			case 'B':
				callFunction(functionB);
				break;
			case 'C':
				callFunction(functionC);
				break;
			case 'D':
				callFunction(functionD);
				break;
			default:
				printf("invalid option");
				break;
			}
		}
	};*/

	do {
		printf("\nInput A/B/C/D: ");
		char option = ' ';
		//std::cin >> option;
		string userInput{ "" };

		std::getline(std::cin, userInput);
		if (userInput.size() > 1) {
			printf("invalid input");
			continue;
		}

		option = upper(userInput[0]);
		if ((option == 'A') || (option == 'B') || (option == 'C') || (option == 'D'))
		{
			printf("Option: %c", option);
			switch (option)
			{
			case 'A':
				callFunction(functionA);
				break;
			case 'B':
				callFunction(functionB);
				break;
			case 'C':
				callFunction(functionC);
				break;
			case 'D':
				callFunction(functionD);
				break;
			default:
				printf("invalid option1");
				break;
			}

		}
		else
		{
			printf("invalid option");
		}

	} while (true);

	printf("\n\n functionA: %s", functionA());
	printf("\n\n functionB: %s", functionB());
	printf("\n\n functionC: %s", functionC());
	printf("\n\n functionD: %s", functionD());


#elif move_constructor
	container<int> bufferRx{ 0x11,0x22,0x56 };
	container<int> dataLayer7{ 0x00,0x00,0x00, 0x00 };

	printf("\nbufferRx: {%s} ", bufferRx.str().c_str());
	printf("\ndataLayer7: {%s} ", dataLayer7.str().c_str());

	//container<int> DataRx(std::move(bufferRx));//ok
	//container<int> DataRx(bufferRx);//ok
	container<int>DataRx = std::move(bufferRx);//ok
	//container<int> a(std::move(DataRx)); //ok
	container<int> a{ 0x00 };
	//a = std::move(DataRx); //ok
	a = DataRx; //ok

	//dataLayer7 = bufferRx; //ok
	printf("\nbufferRx: {%s} ", bufferRx.str().c_str());
	printf("\ndataLayer7: {%s} ", dataLayer7.str().c_str());
	printf("\nDataRx: {%s} ", DataRx.str().c_str());

#elif functors
	MultBy multby4(4);
	printf("result: %i", multby4(5));
	printf("result: %i", multby4(10));
	printf("result: %i", multby4(20));


#elif increment_decrement
	Num number1(3);
	std::cout << "number1: " << std::to_string(number1.getValue()) << std::endl;
	Num number2 = number1++;
	std::cout << "number1: " << std::to_string(number1.getValue()) << std::endl;
	std::cout << "number2: " << std::to_string(number2.getValue()) << std::endl;
	number2 = ++number1;
	std::cout << "number1: " << std::to_string(number1.getValue()) << std::endl;
	std::cout << "number2: " << std::to_string(number2.getValue()) << std::endl;

	--number1;
	std::cout << "--number1: " << std::to_string(number1.getValue()) << std::endl;

#elif opeator_overload
	Rational a(5, 10);
	Rational b(3, 10);
	string message = "Hola mundo ";
	std::cout << "a: " << a.raw_str() << std::endl;
	std::cout << "b: " << b.raw_str() << std::endl;

	Rational c = b.reduce();
	std::cout << "c: " << c.raw_str() << std::endl;
	Rational d;
	d = b;
	std::cout << "d: " << (d).raw_str() << std::endl;
	d.set_numerator(7);
	std::cout << "d: " << (d).raw_str() << std::endl;
	std::cout << "b: " << (b).raw_str() << std::endl;
	b.set_numerator(1);
	std::cout << "b: " << (b).raw_str() << std::endl;
	std::cout << "d: " << (d).raw_str() << std::endl;

	std::cout << "a+b: " << (a + b).raw_str() << std::endl;
	std::cout << "b+a: " << (b + a).raw_str() << std::endl;
	std::cout << "a-b: " << (a - b).raw_str() << std::endl;
	std::cout << "a*b: " << (a * b).raw_str() << std::endl;
	std::cout << "a/b: " << (a / b).raw_str() << std::endl;

	std::cout << "a+14: " << (a + 14).raw_str() << std::endl;
	std::cout << "14+a: " << (14 + a).raw_str() << std::endl;

	message += a;

	std::cout << message << std::endl;
#endif
	return 0;
}