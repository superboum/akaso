#ifndef VIEW_H
#define VIEW_H

#include <vector>

#include "abstractcamera.h"

class CameraObservable
{
public:
    CameraObservable();
    void windowResized();
    void registerCamera(AbstractCamera* camera);
private:
    std::vector<AbstractCamera*> cameraList;
};

#endif // VIEW_H
