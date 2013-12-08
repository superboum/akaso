#include <SFML/Graphics.hpp>
#include <iostream>

#include "util/init.h"
#include "util/loader.h"

#include "view/cameraobservable.h"
#include "view/worldcamera.h"

int main()
{
    std::cout << std::endl << "┌──────────────────────┐" << std::endl << "│ AKASO - early dev    │" << std::endl << "└──────────────────────┘" << std::endl;

    std::cout << "[DEBUG] Initializing the game" << std::endl;

    // Create the main rendering window
    Init base(800, 450);
    sf::RenderWindow* App = base.getApp();

    std::cout << "[DEBUG] Game is ready" << std::endl;
    // Start game loop
    while (App->isOpen())
    {

        // Process events
        sf::Event event;
        while (App->pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed)
            {
                App->close();
            }
            else if (event.type == sf::Event::Resized)
            {
                base.getCameraObservable()->windowResized(event.size.width, event.size.height);
            }
            else if (event.type == sf::Event::KeyPressed)
            {
                base.getCameraObservable()->move(3,3);
                //std::cout << "[DEBUG] A key is pressed" << std::endl;
            }
        }

        // Clear the screen (fill it with gray color)
        App->clear(sf::Color(50, 50, 50));

        //MOVING VIEW

        //App->SetView(*worldCamera.getView());
        App->setView(*base.getWorldCamera()->getView());

        //Draw the map
        // (Will be replaced with map - Currently testing a single chunk)
        base.getCurrentChunk()->draw(base.getApp());

        //STATIC VIEW :
        App->setView(App->getDefaultView());

        //Draw the interface
        //@todo implement

        // Display window contents on screen
        App->display();
    }

    return EXIT_SUCCESS;
}

