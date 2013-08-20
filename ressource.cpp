#include "ressource.h"

#include <iostream>
#include <SFML/Graphics.hpp>

ressource::ressource(int pId, std::string pPath) : id(pId), path(pPath)
{
    std::cout << "[DEBUG] Creating a new ressource" << std::endl;
    load();
}

void ressource::load()
{
    if (!content.LoadFromFile(path)) {
        std::cout << "[ERROR] Unable to load the following ressource : " << path << std::endl;
    } else {
        std::cout << "[SUCCESS] The following ressource was successfully loaded : " << path << std::endl;
    }
}

int ressource::getId()
{
    return id;
}

sf::Image ressource::getContent()
{
    return content;
}
