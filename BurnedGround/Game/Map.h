#ifndef MAP_H
#define MAP_H

#include "MapConstants.h"

class Block;

class Map : public GameObject
{
public:
    Map();
    ~Map();

    //void Draw();

private:
    Block* m_MapArray[SCREEN_WIDTH][SCREEN_HEIGHT];
};

#endif