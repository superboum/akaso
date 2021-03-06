#include "loader.hpp"

#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>

#include "ressource.hpp"

Loader::Loader()
{
    std::cout << "[DEBUG] Creating a new loader" << std::endl;
}

int Loader::loadRessource(std::string pPath)
{
    //@todo check if the ressource is not already loaded...
    int generatedId = imageBox.size();
    imageBox.push_back(Ressource(generatedId, pPath));

    std::cout << "[DEBUG] Loader stored the ressource " << pPath << " at id " << generatedId << std::endl;

    return generatedId;
}

sf::Texture Loader::getImageRessource(int pId)
{
    return imageBox[pId].getContent();
}
