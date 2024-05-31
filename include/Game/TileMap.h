#pragma once
#include "Game.h"
#include <vector>

class TileMap
{
    public:
        TileMap(char* path);
        ~TileMap();
        void render();
    private:
        SDL_Rect srcR;
        SDL_Rect dstR;
        std::vector<SDL_Texture*> tileTypes;
        int** tileArray;
};
