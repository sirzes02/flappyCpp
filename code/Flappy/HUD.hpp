//
//  HUD.hpp
//  Flappy
//
//  Created by Santiago Varela on 14/06/24.
//

#pragma once

#include <SFML/Graphics.hpp>

#include "DEFINITIONS.hpp"
#include "Game.hpp"

namespace Sonar {
class HUD {
public:
    HUD(GameDataRef data);
    
    void Draw();
    void UpdateScore(int score);
    
private:
    GameDataRef _data;
    sf::Text _scoreText;
};
}
