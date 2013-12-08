#ifndef LOADER_H
#define LOADER_H

#include <vector>
#include <string>

#include <SFML/Graphics.hpp>

#include "ressource.hpp"

class Loader
{
public:
    Loader();
    int loadRessource(std::string pPath);
    sf::Texture getImageRessource(int pId);
private:
    std::vector<Ressource> imageBox;
};

#endif // LOADER_H
