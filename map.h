#ifndef MAP_H
#define MAP_H

#include <iostream>

#include "loader.h"

class Map
{
public:
    Map(Loader *pMainLoader);
    void loadMapTest();
    void loadMap();
private:
    Loader *mainLoader;
    void addRessource(std::string path);
};

#endif // MAP_H
