//
//  Pipe.hpp
//  Flappy
//
//  Created by Santiago Varela on 12/06/24.
//

#pragma once

#include <SFML/Graphics.hpp>
#include "Game.hpp"
#include <vector>

namespace Sonar {
class Pipe {
public:
    Pipe(GameDataRef data);
    
    void DrawPipes();
    
private:
    GameDataRef _data;
    std::vector<sf::Sprite> pipeSprites;
};
}
