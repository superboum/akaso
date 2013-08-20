#include "loader.h"

#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>

#include "ressource.h"

loader::loader()
{
    std::cout << "[DEBUG] Creating a new loader" << std::endl;
}

void loader::loadDebugRessources()
{
    imageBox.push_back(ressource(imageBox.size(), "ressources/ground.png"));
}

sf::Image loader::getImageRessource(int pId)
{
    return imageBox[pId].getContent();
}
