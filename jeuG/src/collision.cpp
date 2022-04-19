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

void colisionMap1()
{
    if (shape.getPosition().y+shape.getSize().y > 640)
    {
        collisionMap1 = true;
    }
    else
    {
        if (shape.getPosition().x+shape.getSize().x > 240 && shape.getPosition().x < 320 && shape.getPosition().y+shape.getSize().y > 560)
        {
            collisionMap1 = true;
        }
        else
        {
            if (shape.getPosition().x+shape.getSize().x > 400 && shape.getPosition().x < 480 && shape.getPosition().y+shape.getSize().y > 480)
            {
                collisionMap1 = true;
            }
            else
            {
                if (shape.getPosition().x+shape.getSize().x > 560 && shape.getPosition().x < 960 && shape.getPosition().y+shape.getSize().y > 400 && shape.getPosition().y < 480)
                {
                    collisionMap1 = true;
                }
                else
                {
                    if (shape.getPosition().x+shape.getSize().x > 960 && shape.getPosition().x < 1040 && shape.getPosition().y+shape.getSize().y > 480)
                    {
                        collisionMap1 =true;
                    }
                    else
                    {
                        if (shape.getPosition().x+shape.getSize().x > 1040 && shape.getPosition().x < 1120 && shape.getPosition().y+shape.getSize().y > 560)
                        {
                            collisionMap1 = true;
                        }
                        else
                        {
                            collisionMap1 = false;
                        }
                    }
                }
            }
        }
    }
}

void colisionMap2()
{
    if (shape.getPosition().y+shape.getSize().y > 640 && shape.getPosition().x < 320)
    {
        collisionMap2 = true;
    }
    else
    {
        if (shape.getPosition().x+shape.getSize().x > 400 && shape.getPosition().y+shape.getSize().y >640 && shape.getPosition().x < 800)
        {
            collisionMap2 = true;
        }
        else
        {
            if (shape.getPosition().x+shape.getPosition().x > 880 && shape.getPosition().y+shape.getSize().y > 640)
            {
                collisionMap2 = true;
            }
            else
            {
                if (shape.getPosition().x < 800 && shape.getPosition().y+shape.getSize().y >400 && shape.getPosition().y < 480)
                {
                    collisionMap2 = true;
                }
                else
                {
                    if (shape.getPosition().x+shape.getPosition().x > 880 && shape.getPosition().y+shape.getPosition().y+shape.getSize().y > 240 && shape.getPosition().y < 320)
                    {
                        collisionMap2 =true;
                    }
                    else
                    {
                        if (shape.getPosition().x < 320 && shape.getPosition().y+shape.getSize().y > 160 && shape.getPosition().y < 240)
                        {
                            collisionMap2 = true;
                        }
                        else
                        {
                            collisionMap2 = false;
                        }
                    }
                }
            }
        }
    }
}

void colisionMap3()
{
    if (shape.getPosition().y+shape.getSize().y > 640 && shape.getPosition().x < 320)
    {
        collisionMap3 = true;
    }
    else
    {
        if (shape.getPosition().x+shape.getSize().x > 480 && shape.getPosition().y > 640)
        {
            collisionMap3 = true;
        }
        else
        {
            if (shape.getPosition().x+shape.getPosition().x > 880 && shape.getPosition().y+shape.getSize().y > 640)
            {
                collisionMap3 = true;
            }
            else
            {
                if (shape.getPosition().x < 800 && shape.getPosition().y+shape.getSize().y >400 && shape.getPosition().y < 480)
                {
                    collisionMap3 = true;
                }
                else
                {
                    if (shape.getPosition().x+shape.getPosition().x > 880 && shape.getPosition().y+shape.getPosition().y+shape.getSize().y > 240 && shape.getPosition().y < 320)
                    {
                        collisionMap3 =true;
                    }
                    else
                    {
                        if (shape.getPosition().x < 320 && shape.getPosition().y+shape.getSize().y > 160 && shape.getPosition().y < 240)
                        {
                            collisionMap3 = true;
                        }
                        else
                        {
                            collisionMap3 = false;
                        }
                    }
                }
            }
        }
    }
}

void move()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        colision();
        if (map == 1)
            colisionMap1();
        else if (map == 2)
            colisionMap2();
        else if (map == 3)
            colisionMap3();
        if (collision == false || collisionMap1 == false || collisionMap2 == false || collisionMap3 == false)
        {
            shape.move(20.f, 0.f);
            colision();
            if (map == 1)
                colisionMap1();
            else if (map == 2)
                colisionMap2();
            else if (map == 3)
                colisionMap3();
        }

        if (collision == true || collisionMap1 == true || collisionMap2 == true || collisionMap3 == true)
        {
            shape.setPosition(shape.getPosition().x-20, shape.getPosition().y);//on rajoute -(la vitesse)
            colision();
            if (map == 1)
                colisionMap1();
            else if (map == 2)
                colisionMap2();
            else if (map == 3)
                colisionMap3();
        }
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
    {
        colision();
        if (map == 1)
            colisionMap1();
        else if (map == 2)
            colisionMap2();
        else if (map == 3)
            colisionMap3();
        if (collision == false || collisionMap1 == false || collisionMap2 == false || collisionMap3 == false)
        {
            shape.move(-20.f, 0.f);
            colision();
            if (map == 1)
                colisionMap1();
            else if (map == 2)
                colisionMap2();
            else if (map == 3)
                colisionMap3();
        }

        if (collision == true || collisionMap1 == true || collisionMap2 == true || collisionMap3 == true)
        {
            shape.setPosition(shape.getPosition().x+20, shape.getPosition().y);//on rajoute -(la vitesse)
            colision();
            if (map == 1)
                colisionMap1();
            else if (map == 2)
                colisionMap2();
            else if (map == 3)
                colisionMap3();
        }
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        colision();
        if (map == 1)
            colisionMap1();
        else if (map == 2)
            colisionMap2();
        else if (map == 3)
            colisionMap3();
        if (collision == false || collisionMap1 == false || collisionMap2 == false || collisionMap3 == false)
        {
            shape.move(0.f, 20.f);
            colision();
            if (map == 1)
                colisionMap1();
            else if (map == 2)
                colisionMap2();
            else if (map == 3)
                colisionMap3();
        }

        if (collision == true || collisionMap1 == true || collisionMap2 == true || collisionMap3 == true)
        {
            shape.setPosition(shape.getPosition().x, shape.getPosition().y-20);//on rajoute -(la vitesse)
            colision();
            if (map == 1)
                colisionMap1();
            else if (map == 2)
                colisionMap2();
            else if (map == 3)
                colisionMap3();
        }
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
    {
        colision();
        if (map == 1)
            colisionMap1();
        else if (map == 2)
            colisionMap2();
        else if (map == 3)
            colisionMap3();
        if (collision == false || collisionMap1 == false || collisionMap2 == false || collisionMap3 == false)
        {
            shape.move(0.f, -20.f);
            colision();
            if (map == 1)
                colisionMap1();
            else if (map == 2)
                colisionMap2();
            else if (map == 3)
                colisionMap3();
        }

        if (collision == true || collisionMap1 == true || collisionMap2 == true || collisionMap3 == true)
        {
            shape.setPosition(shape.getPosition().x, shape.getPosition().y+20);//on rajoute -(la vitesse)
            colision();
            if (map == 1)
                colisionMap1();
            else if (map == 2)
                colisionMap2();
            else if (map == 3)
                colisionMap3();
        }
        
    }
}