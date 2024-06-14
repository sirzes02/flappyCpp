//
//  Bird.hpp
//  Flappy
//
//  Created by Santiago Varela on 13/06/24.
//

#pragma once

#include <SFML/Graphics.hpp>

#include "DEFINITIONS.hpp"
#include "Game.hpp"

#include <vector>

namespace Sonar {
class Bird {
public:
    Bird(GameDataRef data);
    
    void Draw();
    void Animate(float dt);
    void Update(float dt);
    void Tap();
    
    const sf::Sprite &GetSprite() const;
    
private:
    GameDataRef _data;
    
    sf::Sprite _birdSprites;
    std::vector<sf::Texture> _animationFrames;
    
    unsigned int _animationIteration;
    
    sf::Clock _clock;
    sf::Clock _movementClock;
    
    int _birdState;
    
    float _rotation;
};
}
