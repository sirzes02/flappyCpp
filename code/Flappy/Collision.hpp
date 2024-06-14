//
//  Collision.hpp
//  Flappy
//
//  Created by Santiago Varela on 14/06/24.
//

#pragma once

#include <SFML/Graphics.hpp>

namespace Sonar {
class Collision {
public:
    Collision();
    
    bool checkSpriteCollision(sf::Sprite sprite1, sf::Sprite sprite2);
};
}