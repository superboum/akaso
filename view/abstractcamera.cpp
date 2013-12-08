#include "abstractcamera.hpp"

#include <SFML/Graphics.hpp>

#include "cameraobservable.hpp"

AbstractCamera::AbstractCamera()
{
}

sf::View* AbstractCamera::getView()
{
    return &view;
}
