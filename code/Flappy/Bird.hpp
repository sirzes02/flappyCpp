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

namespace Sonar {
class Bird {
public:
    Bird(GameDataRef data);
    
    void Draw();
    
private:
    GameDataRef _data;
    
    sf::Sprite _birdSprites;
};
}
