#include "Map.h"
#include "Block.h"

Map::Map()
{
    for (int i = 0; i < SCREEN_WIDTH / BLOCK_SIZE; i++)
    {
        for (int j = 0; j < DEFAULT_MAP_HEIGHT; j++)
        {
            m_MapArray[i][j] = new Block(i * BLOCK_SIZE, j * BLOCK_SIZE);
        }

        for (int j = DEFAULT_MAP_HEIGHT; j < SCREEN_HEIGHT / BLOCK_SIZE; j++)
        {
            m_MapArray[i][j] = nullptr;
        }
    }

    m_BlockPalet[Green] = { new Rect(0.0f, 0.0f, BLOCK_SIZE, BLOCK_SIZE) };
    m_BlockPalet[Green]->SetColor(ColorPalet[Green]);
}
Map::~Map()
{
    for (int i = 0; i < SCREEN_WIDTH / BLOCK_SIZE; i++)
    {
        for (int j = 0; j < SCREEN_HEIGHT / BLOCK_SIZE; j++)
        {
            if (m_MapArray[i][j] != nullptr)
            {
                delete m_MapArray[i][j];
                m_MapArray[i][j] = nullptr;
            }
        }
    }
}

void Map::Draw()
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
}