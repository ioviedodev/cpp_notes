#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()
{
	x = 1;
	y = 1;
}

void Player::CallInput() 
{
	char userInput = ' ';
	cin >> userInput ;

	switch (userInput)
	{
	case 'w':
		cout << "The player move up" << endl;
		y += 1;
		break;
	case 's':
		cout << "The player move down" << endl;
		y -= 1;
		break;
	case 'd':
		cout << "The player move right" << endl;
		x += 1;
		break;
	case 'a':
		cout << "The player move left" << endl;
		x -= 1;
		break;
	default:
		break;
	}

	cout << "My player has the coordenates: {" << x << " , " << y <<" } " << endl;
}