//
//  Game.cpp
//  Flappy
//
//  Created by Santiago Varela on 12/06/24.
//

#include "Game.hpp"
#include "SplashState.hpp"

#include <stdlib.h>
#include <time.h>

namespace Sonar {
Game::Game(int width, int height, std::string title) {
    srand(time(NULL));
    
    _data->window.create(sf::VideoMode(width, height), title, sf::Style::Close | sf::Style::Titlebar);
    _data->machine.AddState(StateRef(new SplashState(this->_data)));
     
    this->Run();
}

void Game::Run() {
    float newTime, frameTime, interpolation;
    float currentTime = this->_clock.getElapsedTime().asSeconds();
    float accumulator = 0.0f;
    
    while (this->_data->window.isOpen()) {
        this->_data->machine.ProcessStateChanges();
        
        newTime = this->_clock.getElapsedTime().asSeconds();
        frameTime = newTime - currentTime;
        
        if (frameTime > 0.25f) {
            frameTime = 0.25f;
        }
        
        currentTime = newTime;
        accumulator += frameTime;
        
        while (accumulator >= dt) {
            this->_data->machine.GetActivateState()->HandleInput();
            this->_data->machine.GetActivateState()->Update(dt);
            
            accumulator -= dt;
        }
        
        interpolation = accumulator / dt;
        this->_data->machine.GetActivateState()->Draw(interpolation);
    }
}
}
