#ifndef INIT_H
#define INIT_H

#include <SFML/Graphics.hpp>

#include "loader.h"
#include "../map/chunk.h"
#include "../map/chunk.h"
#include "../view/cameraobservable.h"

class Init
{
public:
    Init();
    sf::RenderWindow* getApp();
    Loader* getImageLoader();
    Chunk* getCurrentChunk();
    CameraObservable* getCameraObservable();
private:
    sf::RenderWindow* mainWindow;
    Loader imageLoader;
    Chunk currentChunk;
    CameraObservable mainCameraObservable;
};

#endif // INIT_H
