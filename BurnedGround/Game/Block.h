#ifndef BLOCK_H
#define BLOCK_H

class Block
{
public :
    Block();
    Block(int aType, int aColor);
    ~Block();

    int GetType();
    void SetType(int aNewType);

    int GetColor();
    void SetColor(int aNewColor);
private:
    int m_Type;
    int m_Color;
};

#endif