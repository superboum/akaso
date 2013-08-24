#include "abstractcamera.h"

#include <SFML/Graphics.hpp>

#include "cameraobservable.h"

AbstractCamera::AbstractCamera()
{
}

sf::View* AbstractCamera::getView()
{
    return &view;
}
