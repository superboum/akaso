#include "worldcamera.h"

#include <iostream>

WorldCamera::WorldCamera()
{
    std::cout << "[DEBUG] Creating a new World Camera" << std::endl;
    view.SetCenter(600, 400);
    view.SetHalfSize(400, 225);
}

void WorldCamera::configuration()
{

}
