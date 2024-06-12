//
//  State.hpp
//  Flappy
//
//  Created by Santiago Varela on 11/06/24.
//

#pragma once

namespace Sonar {
class State {
public:
    virtual void Init() = 0;
    
    virtual void HandleInput() = 0;
    virtual void update() = 0;
    virtual void Draw(float dt) = 0;
    
    virtual void Pause() {}
    virtual void Resume() {}
};
}