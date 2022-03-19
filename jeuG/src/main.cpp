#include <SFML/Graphics.hpp>
#include <stdio.h>
#include "../include/main.hpp"
//#include "move.cpp"
//#include "../include/move.hpp"
#include "map.cpp"
#include "../include/map.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Platformer2d");
    window.setFramerateLimit(60);
    

    

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

	
	initMap1();
	
	//fonction mouvement gauche
	//fonction mouv droite
	//fonction mouv saut

        window.clear();
        //window.draw();
        window.display();
    }

    return (0);
}
