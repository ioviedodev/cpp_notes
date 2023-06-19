#include "GameMap.h"
#include <iostream>

using namespace std;

GameMap::GameMap()
{
	PlayerCell = NULL;
}

void GameMap::Draw()
{
	int indexRow = 0, indexCol = 0;
	for (indexRow = 0; indexRow < TOTAL_ROWS; indexRow++)
	{
		for (indexCol = 0; indexCol < TOTAL_COLLUMS; indexCol++)
		{
			cout << cells[indexRow][indexCol].id;
		}
		cout << endl;
	}
}

void GameMap::SetPlayerCell(int PlayerX, int PlayerY)
{
	if (PlayerCell != NULL)
	{
		PlayerCell->id = 0;
	}

	PlayerCell = &cells[PlayerX][PlayerY];
	PlayerCell->id = 3;
	cout << "The player coordenates are: " << PlayerX << ", " << PlayerY << endl;
}
