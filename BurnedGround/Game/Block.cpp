#include "Block.h"

Block::Block():
m_Color(0),
m_Type(0)
{}

Block::Block(int aType, int aColor):
m_Color(aColor),
m_Type(aType)
{}

Block::~Block()
{
    //nothing to delete
}


int Block::GetType()
{
    return m_Type;
}

void Block::SetType(int aNewType)
{
    m_Type = aNewType;
}

int Block::GetColor()
{
    return m_Color;
}

void Block::SetColor(int aNewColor)
{
    m_Color = aNewColor;
}