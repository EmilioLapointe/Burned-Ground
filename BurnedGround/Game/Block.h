#ifndef BLOCK_H
#define BLOCK_H

class Block
{
public :

    //Initialisers and destructors
    Block();
    Block(int aType, int aColor);
    ~Block();

    //Setter and getter for the type of the block
    int GetType();
    void SetType(int aNewType);

    //Setter and getter for the color of the block
    int GetColor();
    void SetColor(int aNewColor);


private:

    //Block type (Ground or ceiling)
    int m_Type;

    //Block color
    int m_Color;
};

#endif