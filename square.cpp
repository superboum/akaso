#include "square.h"
#include <SFML/Graphics.hpp>

Square::Square()
{

}

Square::Square(Loader *pImageLoader, int pRessourceId, int pSquareId) : ressourceId(pRessourceId), squareId(pSquareId)
{
    imageLoader = pImageLoader;
}

void Square::draw(sf::RenderWindow* App)
{
    sf::Image ressource = imageLoader->getImageRessource(ressourceId);

    sf::Sprite currentSprite;
    currentSprite.SetImage(ressource);
//    currentSprite.SetPosition(10.0f, 10.0f);
    currentSprite.SetSubRect(sf::IntRect(0, 0, 32, 32));

    App->Draw(currentSprite);
}
