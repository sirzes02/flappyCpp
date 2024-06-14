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
#include "DEFINITIONS.hpp"

namespace Sonar {
class Pipe {
public:
    Pipe(GameDataRef data);
    
    void SpawnBottomPipe();
    void SpawnTopPipe();
    void SpawnScoringPipe();
    void SpawnInvisiblePipe();
    void MovePipes(float dt);
    void DrawPipes();
    void RandomisePipeOffset();
    
    const std::vector<sf::Sprite> &GetSprites() const;
    std::vector<sf::Sprite> &GetScoringSprites();
    
private:
    GameDataRef _data;
    std::vector<sf::Sprite> pipeSprites;
    std::vector<sf::Sprite> scoringSprites;
    
    int _landHeight;
    int _pipeSpawnYOffset;
};
}
