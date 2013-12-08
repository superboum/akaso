#ifndef INIT_H
#define INIT_H

#include <SFML/Graphics.hpp>

#include "loader.h"
#include "../controller/listener.h"
#include "../map/chunk.h"
#include "../view/cameraobservable.h"
#include "../view/worldcamera.h"

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
    Listener mainListener;
    WorldCamera mainWorldCamera;
};

#endif // INIT_H
