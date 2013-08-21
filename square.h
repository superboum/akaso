#ifndef SQUARE_H
#define SQUARE_H

#include "loader.h"
#include <SFML/Graphics.hpp>

/**
 * @brief The Square class
 * squareId corresponds to the position of the desired square on the sprite, left to right and top to bottom
 */
class Square
{
public:
    Square();
    Square(Loader *pImageLoader, int pRessourceId, int pSquareId);
    void draw(sf::RenderWindow* App);
private:
    Loader *imageLoader;
    int ressourceId;
    int squareId;
};

#endif // SQUARE_H
