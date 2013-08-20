#include "loader.h"

#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>

#include "ressource.h"

loader::loader()
{
    std::cout << "[DEBUG] Creating a new loader" << std::endl;
    ressource one(1, "ressources/ground.png");
    imageBox.push_back(one);
}
