#include "square.hpp"
#include <SFML/Graphics.hpp>

#include <iostream>

Square::Square()
{
}

Square::Square(Loader *pImageLoader, int pRessourceId, int pSquareId) : ressourceId(pRessourceId), squareId(pSquareId)
{
    imageLoader = pImageLoader;
    ressource = imageLoader->getImageRessource(ressourceId);
}

void Square::draw(sf::RenderWindow* App, int posX, int posY)
{
    //Hack, texture problem
    currentSprite.setTexture(ressource);
    
    //Position & crop
    currentSprite.setPosition(sf::Vector2f(posX * 32, posY * 32));
    currentSprite.setTextureRect(sf::IntRect(0 + getSquareX(), 0 + getSquareY(), 32, 32));

    App->draw(currentSprite);
}

int Square::getSquareX()
{
    
    return (squareId * 32) % 256;
}

int Square::getSquareY()
{
    return (squareId / 8) * 32;
}
