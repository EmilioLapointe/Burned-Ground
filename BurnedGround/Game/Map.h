#ifndef MAP_H
#define MAP_H
//IM HERE TODO
class Block;

class Map
{
public:
    Map();
    ~Map();
private:
    Block* m_MapArray[WINDOWS_DEFAULT_WIDTH][WINDOWS_DEFAULT_HEIGHT];
};

#endif