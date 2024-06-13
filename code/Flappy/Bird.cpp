//
//  Bird.cpp
//  Flappy
//
//  Created by Santiago Varela on 13/06/24.
//

#include "Bird.hpp"

namespace Sonar {
Bird::Bird(GameDataRef data): _data(data) {
    _birdSprites.setTexture(_data->assets.GetTexture("Bird Frame 1"));
}

void Bird::Draw() {
    _data->window.draw(_birdSprites);
}
}
