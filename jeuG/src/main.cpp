#include <SFML/Graphics.hpp>
#include <stdio.h>
#include "move.cpp"
#include "../include/move.hpp"
#include "map.cpp"
#include "../include/map.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "SFML works!");
    window.setFrameLimit(60);
    

    sf::CircleShape personnage(sf::)

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
        window.draw(plateforme);
        window.display();
    }

    return (0);
}