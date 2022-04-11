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

void move()
{
    while (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        shape.move(1.f, 0.f);
    }

    while (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
    {
        shape.move(-1.f, 0.f);
    }
}

void colision()
{
    n=0;
    while (n<51)
    {
        if (shape.getPosition() != bloc[n].getPosition())
        {
            collision = false;
        }
        n=n+1;
    }
    n=0;
    while (n<51)
    {
        if (shape.getPosition() == bloc[n].getPosition())
        {
            collision = true;
        }
        n=n+1;
    }
}

/*void gravity()
{
    if (collision == false)
    {
        shape.move(0.f, -1.f);
    }
}*/

/*void timeclock()
{
    clock.restart();

    
}*/

/*sf::Time deltatime()
{
    elapsed = clock.getElapsedTime();

    return elapsed;
}*/

void gravity()
{
    if (collision == false)
    {
        velocity.y += 10 * elapsed.asSeconds();

    }
}

void jumping()
{
    if (velocity.y == 0)
    {
        isJumping = false;
    }

    else
    {
        isJumping = true;
    }
}

void jump()
{
    gravity();
    jumping();

    if (!isJumping && sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
    {
        velocity.y -= 20 * elapsed.asSeconds();
    }

    position.y += velocity.y;
    shape.move(0.f, position.y);
}