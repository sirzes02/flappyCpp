//
//  GameState.hpp
//  Flappy
//
//  Created by Santiago Varela on 12/06/24.
//

#pragma once

#include <SFML/Graphics.hpp>
#include "State.hpp"
#include "Game.hpp"

namespace Sonar {
class GameState : public State {
public:
    GameState (GameDataRef data);
    
    void Init();
    
    void HandleInput();
    void Update(float dt);
    void Draw(float dt);
    
private:
    GameDataRef _data;
    
    sf::Sprite _background;
};
}
