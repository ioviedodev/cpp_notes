#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "MapCell.h"
#define TOTAL_ROWS 15
#define TOTAL_COLLUMS 10

class GameMap
{

public:
	MapCell cells[TOTAL_ROWS][TOTAL_COLLUMS];
	GameMap();
	void Draw();

protected:

private:

};


#endif
