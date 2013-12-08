#include "cameraobservable.h"

#include <iostream>

CameraObservable::CameraObservable()
{
}

void CameraObservable::windowResized(int x, int y)
{
    //std::cout << "[DEBUG] Adjusting window resolution for " << x << "x" << y << std::endl;
    for (int i=0; i<cameraList.size(); i++)
    {
        cameraList[i]->setResolution(x, y);
    }
}

void CameraObservable::position(int x, int y)
{
    std::cout << "[DEBUG] Position was changed to " << x << "x" << y << std::endl;
    for (int i=0; i<cameraList.size(); i++)
    {
        cameraList[i]->setPosition(x, y);
    }
}

void CameraObservable::move(int x, int y)
{
    std::cout << "[DEBUG] Position was moved from " << x << "x" << y << std::endl;
    for (int i=0; i<cameraList.size(); i++)
    {
        cameraList[i]->setMovement(x, y);
    }
}

void CameraObservable::registerCamera(AbstractCamera *camera)
{
    cameraList.push_back(camera);
}
