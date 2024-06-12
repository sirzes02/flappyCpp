//
//  StateMachine.hpp
//  Flappy
//
//  Created by Santiago Varela on 11/06/24.
//

#pragma once

#include <memory>
#include <stack>

#include "State.hpp"

namespace Sonar {
typedef std::unique_ptr<State> StateRef;

class StateMachine {
public:
    StateMachine() {}
    ~StateMachine() {}
    
    void AddState(StateRef newState, bool isReplacing = true);
    void RemoveState();
    
    void ProcessStateChanges();
    StateRef &GetActivateState();
    
private:
    std::stack<StateRef> _states;
    StateRef _newState;
    
    bool _isRemoving;
    bool _isAdding;
    bool _isReplacing;
};
}
