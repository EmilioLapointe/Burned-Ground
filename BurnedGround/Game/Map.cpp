#include "Map.h"
#include "Block.h"

Map::Map() : GameObject("Map")
{
    for (int i = 0; i < SCREEN_WIDTH / BLOCK_SIZE; i++)
    {
        for (int j = 0; j < DEFAULT_MAP_HEIGHT; j++)
        {
            m_MapArray[i][j] = (Block*)AddChild(new Block(i * BLOCK_SIZE, j * BLOCK_SIZE), false);
        }

        for (int j = DEFAULT_MAP_HEIGHT; j < SCREEN_HEIGHT / BLOCK_SIZE; j++)
        {
            m_MapArray[i][j] = nullptr;
        }
    }

}
Map::~Map()
{
    /*for (int i = 0; i < SCREEN_WIDTH / BLOCK_SIZE; i++)
    {
        for (int j = 0; j < SCREEN_HEIGHT / BLOCK_SIZE; j++)
        {
            if (m_MapArray[i][j] != nullptr)
            {
                delete m_MapArray[i][j];
                m_MapArray[i][j] = nullptr;
            }
        }
    }*/
}

/*void Map::Draw()
{
    for (int i = 0; i < SCREEN_WIDTH / BLOCK_SIZE; i++)
    {
        for (int j = 0; j < SCREEN_HEIGHT / BLOCK_SIZE; j++)
        {
            if (m_MapArray[i][j] != nullptr)
            {
                m_MapArray[i][j] ->Draw();
            }
        }
    }
}*/