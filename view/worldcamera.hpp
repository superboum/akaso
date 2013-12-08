#ifndef WORLDCAMERA_H
#define WORLDCAMERA_H

#include "abstractcamera.hpp"

class WorldCamera: public AbstractCamera
{
public:
    WorldCamera();
    void setResolution(int x, int y);
    void setPosition(int x, int y);
    void setMovement(int x, int y);
};

#endif // WORLDCAMERA_H
