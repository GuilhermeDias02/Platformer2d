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

    if (shape.getPosition().x < 0 || shape.getPosition().x+shape.getSize().x > 1280 || shape.getPosition().y < 0 || shape.getPosition().y+shape.getSize().y > 720)
    {
        collision = true;
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
            colision();
        }

        if (collision == true)
        {
            shape.setPosition(shape.getPosition().x-20, shape.getPosition().y);//on rajoute -(la vitesse)
            colision();
        }
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
    {
        colision();
        if (collision == false)
        {
            shape.move(-20.f, 0.f);
            colision();
        }

        if (collision == true)
        {
            shape.setPosition(shape.getPosition().x+20, shape.getPosition().y);//on rajoute -(la vitesse)
            colision();
        }
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        colision();
        if (collision == false)
        {
            shape.move(0.f, 20.f);
            colision();
        }

        if (collision == true)
        {
            shape.setPosition(shape.getPosition().x, shape.getPosition().y-20);//on rajoute -(la vitesse)
            colision();
        }
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
    {
        colision();
        if (collision == false)
        {
            shape.move(0.f, -20.f);
            colision();
        }

        if (collision == true)
        {
            shape.setPosition(shape.getPosition().x, shape.getPosition().y+20);//on rajoute -(la vitesse)
            colision();
        }
        
    }
}