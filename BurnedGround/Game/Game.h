//
//  Game.h
//  GameDev2D
//
//  Created by Bradley Flood on 12-08-30.
//  Copyright (c) 2012 Algonquin College. All rights reserved.
//

#ifndef GAME_H
#define GAME_H

#include "../Source/Core/Scene.h"
#include "../Source/Physics/PhysicsWorld.h"

class Map;

namespace GameDev2D
{
    //Forward declarations
    class TouchEvent;

    class Game : public Scene
    {
    public:
        Game();
        virtual ~Game();
        
        //Load game content here
        float LoadContent();
        
        //Updates the game
        void Update(double delta);
        
        //Draw the game
        void Draw();

        //Handle events in this method
        void HandleEvent(Event* event);
        
    private:
        //Conveniance method to handle touch events
        void HandleTouchEvent(TouchEvent* touchEvent);
        Map* daMap;
    };
}

#endif
