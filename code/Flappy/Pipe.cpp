//
//  Pipe.cpp
//  Flappy
//
//  Created by Santiago Varela on 12/06/24.
//

#include "Pipe.hpp"

namespace Sonar {
Pipe::Pipe(GameDataRef data): _data(data) {
    
}

void Pipe::DrawPipes() {
    for (unsigned short int i = 0; i < pipeSprites.size(); i++) {
        _data->window.draw(pipeSprites.at(i));
    }
}
}
