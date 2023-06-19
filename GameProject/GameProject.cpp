// GameProject.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Player.h"
#include "MapCell.h"
#include "GameMap.h"

int main()
{
	bool isGameOver = false;
	Player hero;
	GameMap map;



	while (isGameOver == false)
	{
		hero.CallInput();
		map.SetPlayerCell(hero.x, hero.y);
		map.Draw();
	}

    std::cout << "Hello World!\n";
}
