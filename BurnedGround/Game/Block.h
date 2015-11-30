#ifndef BLOCK_H
#define BLOCK_H

#include "MapConstants.h"

class Block
{
public :

    //Initialisers and destructors
    Block(float x, float y);
    Block(float x, float y, int aType, int aColor);
    ~Block();

    void Draw();

    //Setter and getter for the type of the block
    int GetType();
    void SetType(int aNewType);

    //Setter and getter for the color of the block
    int GetColor();
    void SetColor(int aNewColor);

private:

    //Block type (Ground or ceiling)
    int m_Type;

    //Block Color
    int m_Color;

    //Block Visual
    GameDev2D::Rect* m_Visual;
};

#endif