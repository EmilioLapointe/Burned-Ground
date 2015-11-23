//
//  Game.cpp
//  GameDev2D
//
//  Created by Bradley Flood on 12-08-30.
//  Copyright (c) 2012 Algonquin College. All rights reserved.
//

#include "Game.h"
#include "../Source/Services/ServiceLocator.h"
#include "../Source/Platforms/PlatformLayer.h"
#include "../Source/Audio/Audio.h"
#include "../Source/UI/UI.h"
#include "../Source/Graphics/Graphics.h"
#include "../Source/Events/Input/InputEvents.h"


namespace GameDev2D
{
    Game::Game() : Scene("Game")
    {

    }
    
    Game::~Game()
    {

    }
    
    float Game::LoadContent()
    {
        //Load Game content here
        return 1.0f;
    }
    
    void Game::Update(double aDelta)
    {
        Scene::Update(aDelta);
    }
    
    void Game::Draw()
    {
        Scene::Draw();
    }
    
    void Game::HandleEvent(Event* aEvent)
    {
        switch (aEvent->GetEventCode())
        {
            case TOUCH_EVENT:
                HandleTouchEvent((TouchEvent*)aEvent);
                break;
        
            default:
                break;
        }
    }
    
    void Game::HandleTouchEvent(TouchEvent* aTouchEvent)
    {
        //Handle touch events here
    }
}