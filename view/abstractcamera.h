#ifndef ABSTRACTCAMERA_H
#define ABSTRACTCAMERA_H

#include <SFML/Graphics.hpp>

class AbstractCamera
{
public:
    AbstractCamera();
    virtual void configuration() = 0;
    sf::View* getView();
protected:
    sf::View view;
};

#endif // ABSTRACTCAMERA_H
