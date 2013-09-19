#include "worldcamera.h"

#include <iostream>

WorldCamera::WorldCamera()
{
    std::cout << "[DEBUG] Creating a new World Camera" << std::endl;
    view.SetCenter(0, 0);
    view.SetHalfSize(0, 0);
}

void WorldCamera::setResolution(int x, int y)
{
    view.SetHalfSize(x/2, y/2);
}

void WorldCamera::setPosition(int x, int y)
{
    view.SetCenter(x, y);
}

