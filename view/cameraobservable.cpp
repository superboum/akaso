#include "cameraobservable.h"

#include <iostream>

CameraObservable::CameraObservable()
{
}

void CameraObservable::windowResized(int x, int y)
{
    std::cout << "[DEBUG] Adjusting window resolution for " << x << "x" << y << std::endl;
    for (int i=0; i<cameraList.size(); i++)
    {
        cameraList[i]->setResolution(x, y);
    }
}

void CameraObservable::registerCamera(AbstractCamera *camera)
{
    cameraList.push_back(camera);
}
