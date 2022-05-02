#include <SFML/Graphics.hpp>
#include <stdio.h>
#include <iostream>
#include "../include/main.hpp"
#include "../include/map.hpp"
#include "map.cpp"
#include "../include/collision.hpp"
#include "collision.cpp"

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
            if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window.close();
        }

        window.clear();

        if (map == 1)
        {
            initMap1();
            colisionMap1();
        }
        else if (map == 2)
        {
            initMap1();
            initMap2();
            colisionMap2();
        }
        else if (map == 3)
        {
            initMap3();
            colisionMap3();
        }

        colision();

        move();

        /*std::cout << "position du bloc en x = " << shape.getPosition().x << std::endl;
        std::cout << "position du bloc en y = " << shape.getPosition().y << std::endl;*/

        window.draw(shape);
        window.display();
    }

    return (0);
}