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
    while (App->IsOpened())
    {

        // Process events
        sf::Event Event;
        while (App->GetEvent(Event))
        {
            // Close window : exit
            if (Event.Type == sf::Event::Closed)
            {
                App->Close();
            }
            else if (Event.Type == sf::Event::Resized)
            {
                base.getCameraObservable()->windowResized(Event.Size.Width, Event.Size.Height);
            }
            else if (Event.Type == sf::Event::KeyPressed)
            {
                std::cout << "test" << std::endl;
            }
        }

        // Clear the screen (fill it with gray color)
        App->Clear(sf::Color(50, 50, 50));

        //MOVING VIEW

        //App->SetView(*worldCamera.getView());
        App->SetView(*base.getWorldCamera()->getView());

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

