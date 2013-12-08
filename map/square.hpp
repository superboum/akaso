#ifndef SQUARE_H
#define SQUARE_H

#include <SFML/Graphics.hpp>

#include "../util/loader.hpp"

/**
 * @brief The Square class
 * squareId corresponds to the position of the desired square on the sprite, left to right and top to bottom
 */
class Square
{
public:
    Square();
    Square(Loader *pImageLoader, int pRessourceId, int pSquareId);
    void draw(sf::RenderWindow* App, int posX, int posY);
private:
    Loader *imageLoader;
    sf::Sprite currentSprite;
    sf::Texture ressource;
    
    int ressourceId;
    int squareId;

    int getSquareX();
    int getSquareY();
};

#endif // SQUARE_H
