#include "init.h"

#include <SFML/Graphics.hpp>

#include "loader.h"
#include "../map/chunk.h"
#include "../view/cameraobservable.h"
#include "../view/worldcamera.h"

Init::Init()
{
    Init(800,450);
}

Init::Init(int resx, int resy)
{
    mainWindow = new sf::RenderWindow(sf::VideoMode(resx, resy, 32), "Akaso");

    currentChunk.setImageLoader(&imageLoader);
    currentChunk.loadTestChunk();

    mainCameraObservable.registerCamera(&mainWorldCamera);
    mainCameraObservable.windowResized(resx, resy);
}

sf::RenderWindow* Init::getApp()
{
    return mainWindow;
}

Loader* Init::getImageLoader()
{
    return &imageLoader;
}

Chunk* Init::getCurrentChunk()
{
    return &currentChunk;
}

CameraObservable* Init::getCameraObservable()
{
    return &mainCameraObservable;
}

WorldCamera* Init::getWorldCamera()
{
    return &mainWorldCamera;
}
