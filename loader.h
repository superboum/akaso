#ifndef LOADER_H
#define LOADER_H

#include <vector>
#include <string>

#include <SFML/Graphics.hpp>

#include "ressource.h"

class loader
{
public:
    loader();
    void loadDebugRessources();
    sf::Image getImageRessource(int pId);
private:
    std::vector<ressource> imageBox;
};

#endif // LOADER_H
