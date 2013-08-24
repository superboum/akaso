#include "init.h"

#include <SFML/Graphics.hpp>

#include "loader.h"
#include "../map/chunk.h"
#include "../view/cameraobservable.h"

Init::Init()
{
    mainWindow = new sf::RenderWindow(sf::VideoMode(800, 450, 32), "Akaso");

    currentChunk.setImageLoader(&imageLoader);
    currentChunk.loadTestChunk();
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
