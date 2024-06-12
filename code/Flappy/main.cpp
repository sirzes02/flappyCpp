//
//  main.cpp
//  Flappy
//
//  Created by Santiago Varela on 11/06/24.
//

#include <iostream>
#include "Game.hpp"
#include "DEFINITIONS.hpp"

int main() {
    Sonar::Game(SCREEN_WIDTH, SCREEN_HEIGHT, "Flappy Bird");

    return EXIT_SUCCESS;
}
