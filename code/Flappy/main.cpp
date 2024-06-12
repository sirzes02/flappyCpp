//
//  main.cpp
//  Flappy
//
//  Created by Santiago Varela on 11/06/24.
//

#include <SFML/Graphics.hpp>
#include <iostream>

#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 1024

int main() {
    sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Test game");
    
    while (window.isOpen()) {
        // Handle input/events
        sf::Event event;
        
        while (window.pollEvent(event)) {
            switch (event.type) {
                case sf::Event::Closed:
                    window.close();
                    break;
                default:
                    break;
            }
        }
        
        // Update game logic
        
        window.clear();
        
        // Draw objects
        
        window.display();
    }
}
