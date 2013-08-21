#include <SFML/Graphics.hpp>
#include <iostream>

#include "loader.h"
#include "map.h"

int main()
{
    std::cout << std::endl << "┌──────────────────────┐" << std::endl << "│ AKASO - EXPERIMENTAL │" << std::endl << "└──────────────────────┘" << std::endl;

    // Create the main rendering window
    sf::RenderWindow App(sf::VideoMode(800, 450, 32), "Akaso");

    Loader currentLoader;

    Map currentMap(&currentLoader);
    currentMap.loadMapTest();

    // Start game loop
    while (App.IsOpened())
    {
        // Process events
        sf::Event Event;
        while (App.GetEvent(Event))
        {
            // Close window : exit
            if (Event.Type == sf::Event::Closed)
                App.Close();
        }

        // Clear the screen (fill it with gray color)
        App.Clear(sf::Color(50, 50, 50));

        //@todo remove
        sf::Image test = currentLoader.getImageRessource(0);
        sf::Sprite test2(test);
        App.Draw(test2);

        // Display window contents on screen
        App.Display();
    }

    return EXIT_SUCCESS;
}

