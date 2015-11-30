#ifndef MAP_CONSTANTS_H
#define MAP_CONSTANTS_H

#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 768

#include "../Source/Graphics/Core/Color.h"
#include "../Source/Graphics/Primitives/Rect.h"

using namespace GameDev2D;

enum BlockType
{
    Ground,
    Ceiling,
    AmountOfTypes
};

enum Colors
{
    Green,
    AmountOfColors
};

const Color ColorPalet[AmountOfColors] = { Color::GreenColor() };

const int DEFAULT_MAP_HEIGHT = 20;

const float BLOCK_SIZE = SCREEN_HEIGHT / 100;

#endif