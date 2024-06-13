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
    
    _birdSprites.setPosition((_data->window.getSize().x / 4) - (_birdSprites.getGlobalBounds().width / 2), (_data->window.getSize().y / 2) - (_birdSprites.getGlobalBounds().height / 2));
    _birdState = BIRD_STATE_STILL;
}

void Bird::Draw() {
    _data->window.draw(_birdSprites);
}

void Bird::Animate(float dt) {
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

void Bird::Update(float dt) {
    if (BIRD_STATE_FALLING == _birdState) {
        _birdSprites.move(0, GRAVITY * dt);
    } else if (BIRD_STATE_FLYING == _birdState) {
        _birdSprites.move(0, -FLYING_SPEED * dt);
    }
    
    if (_movementClock.getElapsedTime().asSeconds() > FLYING_DURATION) {
        _movementClock.restart();
        _birdState = BIRD_STATE_FALLING;
    }
}

void Bird::Tap() {
    _movementClock.restart();
    _birdState = BIRD_STATE_FLYING;
}
}
