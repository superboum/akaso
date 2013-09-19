#ifndef WORLDCAMERA_H
#define WORLDCAMERA_H

#include "abstractcamera.h"

class WorldCamera: public AbstractCamera
{
public:
    WorldCamera();
    void setResolution(int x, int y);
    void setPosition(int x, int y);
};

#endif // WORLDCAMERA_H
