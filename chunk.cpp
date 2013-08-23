#include "chunk.h"

#include <iostream>
#include <SFML/Graphics.hpp>

#include "loader.h"
#include "square.h"

Chunk::Chunk()
{

}

Chunk::Chunk(Loader *pImageLoader)
{
    setImageLoader(pImageLoader);
}

void Chunk::setImageLoader(Loader *pImageLoader)
{
    std::cout << "[DEBUG] Creating a new chunk" << std::endl;
    imageLoader = pImageLoader;
}

void Chunk::loadChunk()
{
    //@todo Implement
}

void Chunk::loadTestChunk()
{
    std::srand ( std::time(NULL) );
    int res = imageLoader->loadRessource("ressources/ground.png");
    //grid[0][0] = Square(imageLoader, res, 15);
    for (int i=0; i < 26; i++)
    {
        for (int j=0; j < 26; j++)
        {
            int random = std::rand() % 15;
            grid[i][j] = Square(imageLoader, res, random);
        }
    }
}

void Chunk::draw(sf::RenderWindow* App)
{
//    grid[0][0].draw(App);

    for (int i=0; i < 26; i++)
    {
        for (int j=0; j < 26; j++)
        {
            grid[i][j].draw(App, i, j);
        }
    }
}
