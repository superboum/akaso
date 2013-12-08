#include "chunk.hpp"

#include <iostream>
#include <SFML/Graphics.hpp>

#include "../util/loader.hpp"
#include "square.hpp"

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
    //grid[0][0] = Square(imageLoader, res, 2);
    //grid[1][0] = Square(imageLoader, res, 16);
    //grid[0][1] = Square(imageLoader, res, 3);
    //grid[1][1] = Square(imageLoader, res, 32);
    for (int i=0; i < 26; i++)
    {
        for (int j=0; j < 26; j++)
        {
            int random = std::rand() % 63;
            grid[i][j] = Square(imageLoader, res, random);
        }
    }
}

void Chunk::draw(sf::RenderWindow* App)
{
    //grid[0][0].draw(App,0,0);

    for (int i=0; i < 26; i++)
    {
        for (int j=0; j < 26; j++)
        {
            grid[i][j].draw(App, i, j);
        }
    }
}
