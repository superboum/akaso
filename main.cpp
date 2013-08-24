#include <SFML/Graphics.hpp>
#include <iostream>

#include "util/init.h"
#include "util/loader.h"

int main()
{
    std::cout << std::endl << "┌──────────────────────┐" << std::endl << "│ AKASO - early dev    │" << std::endl << "└──────────────────────┘" << std::endl;

    std::cout << "[DEBUG] Initializing the game" << std::endl;

    // Create the main rendering window
    Init base;
    sf::RenderWindow* App = base.getApp();

    std::cout << "[DEBUG] Game is ready" << std::endl;
    // Start game loop
    while (App->IsOpened())
    {
        // Process events
        sf::Event Event;
        while (App->GetEvent(Event))
        {
            // Close window : exit
            if (Event.Type == sf::Event::Closed)
                App->Close();
        }

        // Clear the screen (fill it with gray color)
        App->Clear(sf::Color(50, 50, 50));

        //MOVING VIEW
        //@todo implement camera

        //Draw the map
        // (Will be replaced with map - Currently testing a single chunk)
        base.getCurrentChunk()->draw(base.getApp());

        //STATIC VIEW :
        App->SetView(App->GetDefaultView());

        //Draw the interface
        //@todo implement

        // Display window contents on screen
        App->Display();
    }

    return EXIT_SUCCESS;
}

