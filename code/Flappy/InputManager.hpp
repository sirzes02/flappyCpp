//
//  InputManager.hpp
//  Flappy
//
//  Created by Santiago Varela on 11/06/24.
//

#pragma once

#include <SFML/Graphics.hpp>

namespace Sonar {
class InputManager {
public:
    InputManager() {}
    ~InputManager() {}
    
    bool isSpriteClicked(sf::Sprite object, sf::Mouse::Button button, sf::RenderWindow &window);
    
    sf::Vector2i GetMousePosition(sf::RenderWindow &window);
};
}
