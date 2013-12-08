#include "worldcamera.hpp"

#include <iostream>

WorldCamera::WorldCamera()
{
    std::cout << "[DEBUG] Creating a new World Camera" << std::endl;
    view.setCenter(sf::Vector2f(900, 100));
    //view.setSize(sf::Vector2f(1000, 1000));
}

void WorldCamera::setResolution(int x, int y)
{
    view.setSize(sf::Vector2f(x, y));
}

void WorldCamera::setPosition(int x, int y)
{
    view.setCenter(sf::Vector2f(x, y));
}

void WorldCamera::setMovement(int x, int y)
{
    view.move(sf::Vector2f(x, y));
}
