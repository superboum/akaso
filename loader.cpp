#include "loader.h"

#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>

#include "ressource.h"

Loader::Loader()
{
    std::cout << "[DEBUG] Creating a new loader" << std::endl;
}

int Loader::loadRessource(std::string pPath)
{
    int generatedId = imageBox.size();
    imageBox.push_back(Ressource(generatedId, pPath));
    return generatedId;
}

sf::Image Loader::getImageRessource(int pId)
{
    return imageBox[pId].getContent();
}
