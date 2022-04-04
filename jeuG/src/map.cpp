#include <SFML/Graphics.hpp>
#include <stdio.h>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "../include/main.hpp"
#include "../include/map.hpp"

void setBackgroundMap1()
{
  sf::Sprite background;
  sf::Texture sky;
  if (!sky.loadFromFile("../assets/cielplt2d.png"))
    {
      return;
    }
  background.setTexture(sky);

  window.draw(background);
}

void setDoorMap1()
{
  if (!doorT.loadFromFile("../assets/porte.png"))
  {
    return;
  }

  door.setTexture(doorT);

  door.setPosition(sf::Vector2f(800.f, 480.f));

  window.draw(door);
}

void setKeyMap1()
{
  if (!keyT.loadFromFile("../assets/cle.png"))
  {
    return;
  }
  key.setTexture(keyT);
  key.setPosition(sf::Vector2f(1200.f, 560.f));
  window.draw(key);
}

void setBlocMap1()
{
  if (!grass1.loadFromFile("../assets/blocterre.png"))
    {
      return;
    }

  if (!grass2.loadFromFile("../assets/blocterre2.png"))
    {
      return;
    }

  if (!grass3.loadFromFile("../assets/blocterre3.png"))
    {
      return;
    }

  if (!grass4.loadFromFile("../assets/blocterre4.png"))
    {
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
  setDoorMap1();
  setKeyMap1();
  setBlocMap1();
}

void setBackgroundMap2()
{
  sf::Sprite background2;
  sf::Texture forest;
  if (!forest.loadFromFile("../assets/forestplt2d.png"))
  {
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

void setBlocMap2()
{
  if (!branch1.loadFromFile("../assets/bois1.png"))
  {
    return;
  }

  if (!branch2.loadFromFile("../assets/bois2.png"))
  {
    return;
  }

  if (!branch3.loadFromFile("../assets/bois3.png"))
  {
    return;
  }

  if (!branch4.loadFromFile("../assets/bois4.png"))
  {
    return;
  }

  if (!waterT.loadFromFile("../assets/blocDeau.png"))
  {
    return;
  }

  if (!sapT.loadFromFile("../assets/seve.png"))
  {
    return;
  }

  n=0;
  while (n<9)
  {
    bloc[n].setTexture(branch1);
    n=n+1;
  }

  bloc[9].setTexture(branch2);

  n=10;
  while (n<15)
  {
    bloc[n].setTexture(branch3);
    n=n+1;
  }

  bloc[15].setTexture(branch4);

  n=16;
  while (n<30)
  {
    bloc[n].setTexture(grass1);
    n=n+1;
  }

  water.setTexture(waterT);

  n=0;
  while (n<4)
  {
    sap[n].setTexture(sapT);
    n=n+1;
  }

  n=0;
  while (n<3)
  {
    bloc[n].setPosition(sf::Vector2f(n*80.f, 160.f));
    n=n+1;
  }

  bloc[9].setPosition(sf::Vector2f(240.f, 160.f));

  n=3;
  while (n<9)
  {
    bloc[n].setPosition(sf::Vector2f(n*80-240.f, 400.f));
    n=n+1;
  }

  n=10;
  while (n<15)
  {
    bloc[n].setPosition(sf::Vector2f(n*80+80.f, 240.f));
    n=n+1;
  }

  bloc[15].setPosition(sf::Vector2f(800.f, 240.f));

  n=16;
  while (n<20)
  {
    bloc[n].setPosition(sf::Vector2f(n*80-1280.f, 640.f));
    n=n+1;
  }

  n=20;
  while (n<25)
  {
    bloc[n].setPosition(sf::Vector2f(n*80-1200.f, 640.f));
    n=n+1;
  }

  n=25;
  while (n<30)
  {
    bloc[n].setPosition(sf::Vector2f(n*80-1120.f, 640.f));
    n=n+1;
  }

  water.setPosition(sf::Vector2f(320.f, 640.f));

  n=0;
  while (n<4)
  {
    sap[n].setPosition(sf::Vector2f(n*80+480.f, 400.f));
    n=n+1;
  }

  window.draw(water);

  n=0;
  while (n<4)
  {
    window.draw(sap[n]);
    n=n+1;
  }

  n=0;
  while (n<30)
  {
    window.draw(bloc[n]);
    n=n+1;
  }
}

void initMap2()
{
  setBackgroundMap2();
  setKeyMap2();
  setBlocMap2();
}