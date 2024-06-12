//
//  Land.hpp
//  Flappy
//
//  Created by Santiago Varela on 12/06/24.
//

#pragma once

#include <SFML/Graphics.hpp>
#include "Game.hpp"
#include <vector>

namespace Sonar {
class Land {
public:
    Land(GameDataRef data);
    
    void MoveLand(float dt);
    void DrawLand();
    
private:
    GameDataRef _data;
    
    std::vector<sf::Sprite> _landSprites;
};
}
