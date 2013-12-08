#include "init.hpp"

#include <SFML/Graphics.hpp>

#include "loader.hpp"
#include "../map/chunk.hpp"
#include "../view/cameraobservable.hpp"
#include "../view/worldcamera.hpp"

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
