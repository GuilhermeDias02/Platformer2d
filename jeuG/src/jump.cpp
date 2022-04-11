#include <SFML/Graphics.hpp>
#include <stdio.h>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "../include/main.hpp"
#include "../include/map.hpp"
#include "../include/jump.hpp"

void perso()
{
    shape.setFillColor(sf::Color(100, 250, 50));
    shape.setPosition(sf::Vector2f(80.f, 560.f));
}

void colision()
{
    n=0;
    while (n<50)
    {
        if (shape.getPosition() != bloc[n].getPosition())
        {
            collision = false;
        }

        if (shape.getPosition() == bloc[n].getPosition() || shape.getPosition().x < 0 || shape.getPosition().x > 1200 || shape.getPosition().y < 0 || shape.getPosition().y > 640)
        {
            collision = true;
        }
        n=n+1;
    }
}

void move()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        colision();
        if (collision == false)
        {
            shape.move(20.f, 0.f);
        }
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
    {
        colision();
        if (collision == false)
        {
            shape.move(-20.f, 0.f);
        }
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        colision();
        if (collision == false)
        {
            shape.move(0.f, 20.f);
        }
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
    {
        colision();
        if (collision == false)
        {
            shape.move(0.f, -20.f);
        }
    }
}

