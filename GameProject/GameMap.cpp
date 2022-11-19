#include "GameMap.h"
#include <iostream>

using namespace std;

GameMap::GameMap()
{

}

void GameMap::Draw()
{
	int indexRow = 0, indexCol = 0;
	for (indexRow = 0; indexRow < TOTAL_ROWS; indexRow++)
	{
		for (indexCol = 0; indexCol < TOTAL_COLLUMS; indexCol++)
		{
			cout << 0;
		}
		cout << endl;
	}
}