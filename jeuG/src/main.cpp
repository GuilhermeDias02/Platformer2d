#include <SFML/Graphics.hpp>
#include <stdio.h>
#include <iostream>
#include "../include/main.hpp"
//#include "move.cpp"
//#include "../include/move.hpp"
#include "map.cpp"
#include "../include/map.hpp"

int main()
{
    window.setFramerateLimit(60);
    window.setVerticalSyncEnabled(false);

    

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        
	    
	
	//fonction mouvement gauche
	//fonction mouv droite
	//fonction mouv saut

        window.clear();
        
        initMap1();
        initMap2();

        window.display();
    }

    return (0);
}
