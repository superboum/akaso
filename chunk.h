#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <SFML/Graphics.hpp>

#include "loader.h"
#include "square.h"

class Chunk
{
public:
    Chunk();
    Chunk(Loader *pImageLoader);
    void loadTestChunk();
    void loadChunk();
    void draw(sf::RenderWindow* App);
    void setImageLoader(Loader *pImageLoader);
private:
    Loader *imageLoader;
    void addRessource(std::string path);
    Square grid[26][26];
};

#endif // MAP_H
