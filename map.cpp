#include "map.h"

#include <iostream>

#include "loader.h"

Map::Map(Loader *pMainLoader)
{
    std::cout << "[DEBUG] Creating a new map" << std::endl;
    mainLoader = pMainLoader;
}

void Map::loadMap()
{
    //@todo Implement
}

void Map::loadMapTest()
{
    mainLoader->loadRessource("ressources/ground.png");
}
