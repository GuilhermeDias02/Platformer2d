#include <SFML/Graphics.hpp>
#include <stdio.h>
#include <SFML/Graphics.hpp>
#include "../include/map.hpp"

void loadTexturesMap1()
{
  sf::Texture grass;
  if (!grass.loadFromFile("../assets/blocterre.png"))
    {
      printf("%s", "Failed to load grass");
      return;
    }

  sf::Texture grass2;
  if (!grass2.loadFromFile("../assets/blocterre.png"))
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
};

void loadTexturesOther()
{
  sf::Texture cle;
  if (!cle.loadFromFile("../assets/cle.png"))
    {
      printf("%s", "Failed to load cle");
      return;
    }
};

void loadSpritesMap1()
{
  // 27/47max
  sf::Sprite bloc1;
  sf::Sprite bloc2;
  sf::Sprite bloc3;
  sf::Sprite bloc4;
  sf::Sprite bloc5;
  sf::Sprite bloc6;
  sf::Sprite bloc7;
  sf::Sprite bloc8;
  sf::Sprite bloc9;
  sf::Sprite bloc10;
  sf::Sprite bloc11;
  sf::Sprite bloc12;
  sf::Sprite bloc13;
  sf::Sprite bloc14;
  sf::Sprite bloc15;
  sf::Sprite bloc16;
  sf::Sprite bloc17;
  sf::Sprite bloc18;
  sf::Sprite bloc19;
  sf::Sprite bloc20;
  sf::Sprite bloc21;
  sf::Sprite bloc22;
  sf::Sprite bloc23;
  sf::Sprite bloc24;
  sf::Sprite bloc25;
  sf::Sprite bloc26;
  sf::Sprite bloc27;
};

void setSpriteTextureMap1()
{
  bloc1.setTexture(grass1);
  bloc2.setTexture(grass1);
  bloc3.setTexture(grass1);
  bloc4.settexture(grass3);
  bloc5.setTexture(grass1);
  bloc6.setTexture(grass1);
  bloc7.setTexture(grass3);
  bloc8.setTexture(grass2);
  bloc9.setTexture(grass1);
  bloc10.setTexture(grass1);
  bloc11.setTexture(grass1);
  bloc12.setTexture(grass1);
  bloc13.setTexture(grass1);
  bloc14.setTexture(grass1);
  bloc15.setTexture(grass1);
  bloc16.setTexture(grass1);
  bloc17.setTexture(grass4);
  bloc18.setTexture(grass3);
  bloc19.setTexture(grass1);
  bloc20.setTexture(grass1);
  bloc21
};

void setPosSpriteMap1()
{
  bloc1.setPosition(sf::Vector2f(0.f, 640.f));
  bloc2.setPosition(sf::Vector2f(80.f, 640.f));
  
  window.draw(bloc1, );
};

void Map1()
{
  
};
