#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "MapCell.h"
#define TOTAL_ROWS 15
#define TOTAL_COLLUMS 10

class GameMap
{

public:
	MapCell cells[TOTAL_ROWS][TOTAL_COLLUMS];
	MapCell* PlayerCell;

	GameMap();
	void Draw();
	void SetPlayerCell(int PlayerX, int PlayerY);
protected:

private:

};


#endif
