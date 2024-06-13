//
//  Bird.cpp
//  Flappy
//
//  Created by Santiago Varela on 13/06/24.
//

#include "Bird.hpp"

namespace Sonar {
Bird::Bird(GameDataRef data): _data(data) {
    _animationIteration = 0;
    
    _animationFrames.push_back(_data->assets.GetTexture("Bird Frame 1"));
    _animationFrames.push_back(_data->assets.GetTexture("Bird Frame 2"));
    _animationFrames.push_back(_data->assets.GetTexture("Bird Frame 3"));
    _animationFrames.push_back(_data->assets.GetTexture("Bird Frame 4"));
    
    _birdSprites.setTexture(_animationFrames.at(_animationIteration));
}

void Bird::Draw() {
    _data->window.draw(_birdSprites);
}

void Bird::animate(float dt) {
    if (_clock.getElapsedTime().asSeconds() > (BIRD_ANIMATION_DURATION / _animationFrames.size())) {
        if (_animationIteration < _animationFrames.size() - 1) {
            _animationIteration++;
        } else {
            _animationIteration = 0;
        }
        
        _birdSprites.setTexture(_animationFrames.at(_animationIteration));
        
        _clock.restart();
    }
}
}
