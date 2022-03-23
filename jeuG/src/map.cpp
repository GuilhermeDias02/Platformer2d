#include <SFML/Graphics.hpp>
#include <stdio.h>
#include <SFML/Graphics.hpp>
#include "../include/main.hpp"
#include "../include/map.hpp"

void setBackgroundMap1()
{
  sf::Sprite background;
  sf::Texture sky;
  if (!sky.loadFromFile("../assets/cielplt2d.png"))
    {
      printf("%s", "Failed to load sky");
      return;
    }
  background.setTexture(sky);

  window.draw(background);
}

void setKeyMap1()
{
  //sf::Texture keyT;
  if (!keyT.loadFromFile("../assets/cle.png"))
  {
    printf("%s", "Failed to load keyT");
    return;
  }
  key.setTexture(keyT);
  key.setPosition(sf::Vector2f(1200.f, 560.f));
  window.draw(key);
}

void setBlocMap1()
{
  sf::Texture grass1;
  if (!grass1.loadFromFile("../assets/blocterre.png"))
    {
      printf("%s", "Failed to load grass");
      return;
    }

  sf::Texture grass2;
  if (!grass2.loadFromFile("../assets/blocterre2.png"))
    {
      printf("%s", "Failed to load grass2");
      return;
    }

  sf::Texture grass3;
  if (!grass3.loadFromFile("../assets/blocterre3.png"))
    {
      printf("%s", "Failed to load grass3");
      return;
    }

  sf::Texture grass4;
  if (!grass4.loadFromFile("../assets/blocterre4.png"))
    {
      printf("%s", "Failed to load grass4");
      return;
    }

  while (n<21)
  {
    bloc[n].setTexture(grass1);
    n=n+1;
  }
  n=0;

  while (n<2)
  {
    bloc[n+21].setTexture(grass2);
    n=n+1;
  }
  n=0;

  while (n<3)
  {
    bloc[n+23].setTexture(grass3);
    n=n+1;
  }

  bloc[26].setTexture(grass4);
    
  n=0;
  while (n<3)
  {
    bloc[n].setPosition(sf::Vector2f(n*80.f, 640.f));
    n=n+1;
  }

  bloc[3].setPosition(sf::Vector2f(240.f, 560.f));
  bloc[4].setPosition(sf::Vector2f(320.f, 640.f));
  bloc[5].setPosition(sf::Vector2f(400.f, 480.f));

  n=6;
  while (n<12)
  {
    bloc[n].setPosition(sf::Vector2f(n*80.f, 640.f));
    n=n+1;
  }
  
  bloc[12].setPosition(sf::Vector2f(1120.f, 640.f));
  bloc[13].setPosition(sf::Vector2f(1200.f, 640.f));
  bloc[14].setPosition(sf::Vector2f(1040.f, 560.f));
  bloc[15].setPosition(sf::Vector2f(960.f, 480.f));

  n=16;
  while (n<21)
  {
    bloc[n].setPosition(sf::Vector2f(n*80-720.f, 400.f));
    n=n+1;
  }

  bloc[21].setPosition(sf::Vector2f(400.f, 560.f));
  bloc[22].setPosition(sf::Vector2f(960.f, 560.f));
  bloc[23].setPosition(sf::Vector2f(240.f, 640.f));
  bloc[24].setPosition(sf::Vector2f(400.f, 640.f));
  bloc[25].setPosition(sf::Vector2f(1040.f, 640.f));
  bloc[26].setPosition(sf::Vector2f(960.f, 640.f));

  n=0;
  while (n<27)
  {
    window.draw(bloc[n]);
    n=n+1;
  }
}

void initMap1()
{
  setBackgroundMap1();
  setKeyMap1();
  setBlocMap1();
}

void setBackgroundMap2()
{
  sf::Sprite background2;
  sf::Texture forest;
  if (!forest.loadFromFile("../assets/forestplt2d.png"))
  {
    printf("%s", "Failed to load forest");
    return;
  }
  forest.setSmooth(true);
  background2.setTexture(forest);
  background2.setScale(sf::Vector2f(1.608040201f, 1.608040201f));
  window.draw(background2);
}

void setKeyMap2()
{
  key.setTexture(keyT);
  key.setPosition(sf::Vector2f(1200.f, 160.f));
  window.draw(key);
}

void initMap2()
{
  setBackgroundMap2();
  setKeyMap2();
}