#ifndef INIT_H
#define INIT_H

#include <SFML/Graphics.hpp>

#include "loader.h"
#include "../map/chunk.h"

class Init
{
public:
    Init();
    sf::RenderWindow* getApp();
    Loader* getImageLoader();
    Chunk* getCurrentChunk();
private:
    sf::RenderWindow* mainWindow;
    Loader imageLoader;
    Chunk currentChunk;
};

#endif // INIT_H
