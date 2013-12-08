#ifndef INIT_H
#define INIT_H

#include <SFML/Graphics.hpp>

#include "loader.hpp"
#include "../controller/commander.hpp"
#include "../map/chunk.hpp"
#include "../view/cameraobservable.hpp"
#include "../view/worldcamera.hpp"

class Init
{
public:
    Init();
    Init(int resx, int resy);
    sf::RenderWindow* getApp();
    Loader* getImageLoader();
    Chunk* getCurrentChunk();
    CameraObservable* getCameraObservable();
    WorldCamera* getWorldCamera();
private:
    sf::RenderWindow* mainWindow;
    Loader imageLoader;
    Chunk currentChunk;
    CameraObservable mainCameraObservable;
    Commander mainCommander;
    WorldCamera mainWorldCamera;
};

#endif // INIT_H
