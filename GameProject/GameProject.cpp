// GameProject.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Player.h"
#include "MapCell.h"

int main()
{
	bool isGameOver = false;
	Player hero;

	while (isGameOver == false)
	{
		hero.CallInput();
	}

    std::cout << "Hello World!\n";
}
