#include "Block.h"

Block::Block(float x, float y) :
m_Type(0),
m_Color(Green)
{
    m_Visual = new Rect(0.0f, 0.0f, BLOCK_SIZE, BLOCK_SIZE);
    m_Visual->SetColor(ColorPalet[Green]);
    m_Visual->SetLocalPosition(x, y);
}

Block::Block(float x, float y, int aType, int aColor) :
m_Type(aType),
m_Color(aColor)
{
    m_Visual = new Rect(0.0f, 0.0f, BLOCK_SIZE, BLOCK_SIZE);
    m_Visual->SetColor(ColorPalet[aColor]);
    m_Visual->SetLocalPosition(x, y);
}

Block::~Block()
{
    if (m_Visual != nullptr)
    {
        delete m_Visual;
        m_Visual = nullptr;
    }
}


void Block::Draw()
{
    m_Visual->Draw();
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
    m_Visual->SetColor(ColorPalet[aNewColor]);
}
