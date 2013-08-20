#ifndef RESSOURCE_H
#define RESSOURCE_H

#include <string>
#include <SFML/Graphics.hpp>

class ressource
{
public:
    ressource(int pId, std::string pPath);
    void load();
    int getId();
    sf::Image getContent();
private:
    int id;
    std::string path;
    sf::Image content;
};

#endif // RESSOURCE_H
