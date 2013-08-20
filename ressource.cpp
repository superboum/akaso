#include "ressource.h"

#include <iostream>
#include <SFML/Graphics.hpp>

Ressource::Ressource(int pId, std::string pPath) : id(pId), path(pPath)
{
    std::cout << "[DEBUG] Creating a new ressource" << std::endl;
    load();
}

void Ressource::load()
{
    if (!content.LoadFromFile(path)) {
        std::cout << "[ERROR] Unable to load the following ressource : " << path << std::endl;
    } else {
        std::cout << "[DEBUG] The following ressource was successfully loaded : " << path << std::endl;
    }
}

int Ressource::getId()
{
    return id;
}

sf::Image Ressource::getContent()
{
    return content;
}
