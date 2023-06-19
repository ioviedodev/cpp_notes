#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()
{
	x = 0;
	y = 0;
}


void Player::CallInput() 
{
	char userInput = ' ';
	cin >> userInput ;

	switch (userInput)
	{
	case 'w':
		cout << "The player move up" << endl;
		x = x - 1;
		break;
	case 's':
		cout << "The player move down" << endl;
		x = x+1;
		break;
	case 'd':
		cout << "The player move right" << endl;
		y = y + 1;
		break;
	case 'a':
		cout << "The player move left" << endl;
		y = y - 1;
		break;
	default:
		break;
	}

	cout << "My player has the coordenates: {" << x << " , " << y <<" } " << endl;
}