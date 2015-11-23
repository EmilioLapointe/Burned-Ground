#include "../Source/Graphics/Core/Color.h"

using namespace GameDev2D;

enum BlockType
{
    Ground = 0,
    Ceiling,
    AmountOfTypes
};

Color* ColorPalet[] = { &Color::GreenColor() };

enum Colors
{
    Green = 0,
    AmountOfColors
};