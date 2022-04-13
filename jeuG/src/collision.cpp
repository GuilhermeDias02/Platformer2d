#include <SFML/Graphics.hpp>
#include <stdio.h>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "../include/main.hpp"
#include "../include/map.hpp"
#include "../include/collision.hpp"

void perso()
{
    shape.setFillColor(sf::Color(100, 250, 50));
    shape.setPosition(sf::Vector2f(160.f, 480.f));
}

void colision()
{
    if (shape.getPosition().x >= 0 || shape.getPosition().x+shape.getSize().x <= 1280 || shape.getPosition().y >= 0 || shape.getPosition().y+shape.getSize().y <= 720)
    {
        collision = false;
    }

    n=0;
    while (n<50)
    {
        if (shape.getPosition().x-shape.getSize().x > bloc[n].getPosition().x || shape.getPosition().x+shape.getSize().x < bloc[n].getPosition().x || shape.getPosition().y-shape.getSize().y > bloc[n].getPosition().y || shape.getPosition().y+shape.getSize().y < bloc[n].getPosition().y)
        {
            collisionB[n] = false;
        }
        n=n+1;
    }

    if (shape.getPosition().x < 0 || shape.getPosition().x+shape.getSize().x > 1280 || shape.getPosition().y < 0 || shape.getPosition().y+shape.getSize().y > 720)
    {
        collision = true;
    }

    n=0;
    while (n<50)
    {
        if (shape.getPosition().x-shape.getSize().x < bloc[n].getPosition().x || shape.getPosition().x+shape.getSize().x > bloc[n].getPosition().x || shape.getPosition().y-shape.getSize().y < bloc[n].getPosition().y || shape.getPosition().y+shape.getSize().y > bloc[n].getPosition().y)
        {
            collisionB[n] = true;
        }
        n=n+1;
    }
}

void move()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        n=0;
        while (n<50)
        {
            colision();
            if (collision == false || collisionB[n] == false)
            {
                shape.move(20.f, 0.f);
                colision();
            }

            if (collision == true || collisionB[n] == true)
            {
                shape.setPosition(shape.getPosition().x-20, shape.getPosition().y);//on rajoute -(la vitesse)
                colision();
            }
            n=n+1;
        }
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
    {
        n=0;
        while (n<50)
        {
            colision();
            if (collision == false || collisionB[n] == false)
            {
                shape.move(-20.f, 0.f);
                colision();
            }

            if (collision == true || collisionB[n] == true)
            {
                shape.setPosition(shape.getPosition().x+20, shape.getPosition().y);//on rajoute -(la vitesse)
                colision();
            }
            n=n+1;
        }
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        n=0;
        while (n<50)
        {
            colision();
            if (collision == false || collisionB[n] == false)
            {
                shape.move(0.f, 20.f);
                colision();
            }

            if (collision == true || collisionB[n] == true)
            {
                shape.setPosition(shape.getPosition().x, shape.getPosition().y-20);//on rajoute -(la vitesse)
                colision();
            }
            n=n+1;
        }
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
    {
        n=0;
        while (n<50)
        {
            colision();
            if (collision == false || collisionB[n] == false)
            {
                shape.move(0.f, -20.f);
                colision();
            }

            if (collision == true || collisionB[n] == true)
            {
                shape.setPosition(shape.getPosition().x, shape.getPosition().y+20);//on rajoute -(la vitesse)
                colision();
            }
            n=n+1;
        }
    }
}