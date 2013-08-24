#include "cameraobservable.h"

CameraObservable::CameraObservable()
{
}

void CameraObservable::windowResized()
{
    //@todo implement
}

void CameraObservable::registerCamera(AbstractCamera *camera)
{
    cameraList.push_back(camera);
}
