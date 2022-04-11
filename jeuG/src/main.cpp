#include <SFML/Graphics.hpp>
#include <stdio.h>
#include <iostream>
#include "../include/main.hpp"
#include "../include/map.hpp"
#include "map.cpp"
#include "../include/jump.hpp"
#include "jump.cpp"

int main()
{
    window.setFramerateLimit(60);
    window.setVerticalSyncEnabled(false);
    perso();
    

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
        initMap3();

        move();

        window.draw(shape);
        window.display();
    }

    return (0);
}
