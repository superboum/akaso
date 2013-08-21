#include "square.h"
#include <SFML/Graphics.hpp>

Square::Square()
{
}

Square::Square(Loader *pImageLoader, int pRessourceId, int pSquareId) : ressourceId(pRessourceId), squareId(pSquareId)
{
    imageLoader = pImageLoader;
}

void Square::draw(sf::RenderWindow* App, int posX, int posY)
{
    sf::Image ressource = imageLoader->getImageRessource(ressourceId);

    sf::Sprite currentSprite;
    currentSprite.SetImage(ressource);
    currentSprite.SetPosition((float)(posX * 31), (float)(posY * 31));
    currentSprite.SetSubRect(sf::IntRect(1 + getSquareX(), 1 + getSquareY(), 32 + getSquareX(), 32 + getSquareY()));

    App->Draw(currentSprite);
}

int Square::getSquareX()
{
    return (squareId * 32) % 256;
}

int Square::getSquareY()
{
    return (squareId / 8) * 32;
}
