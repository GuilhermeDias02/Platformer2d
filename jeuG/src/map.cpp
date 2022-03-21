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

void loadTexturesMap1()
{
  sf::Texture grass1;
  if (!grass1.loadFromFile("../assets/blocterre.png"))
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
  sf::Texture key;
  if (!key.loadFromFile("../assets/cle.png"))
    {
      printf("%s", "Failed to load key");
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
  bloc4.setTexture(grass3);
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
  bloc16.setTexture(grass4);
  bloc17.setTexture(grass3);
  bloc18.setTexture(grass1);
  bloc19.setTexture(grass1);
  bloc20.setTexture(grass1);
  bloc21.setTexture(grass2);
  bloc22.setTexture(grass1);
  bloc23.setTexture(grass1);
  bloc24.setTexture(grass1);
  bloc25.setTexture(grass1);
  bloc26.setTexture(grass1);
  bloc27.setTexture(grass1);
};

void setPosSpriteMap1()
{
  bloc1.setPosition(sf::Vector2f(0.f, 640.f));
  bloc2.setPosition(sf::Vector2f(80.f, 640.f));
  bloc3.setPosition(sf::Vector2f(160.f, 640.f));
  bloc4.setPosition(sf::Vector2f(240.f, 640.f));
  bloc5.setPosition(sf::Vector2f(320.f, 560.f));
  bloc6.setPosition(sf::Vector2f(400.f, 640.f));
  bloc7.setPosition(sf::Vector2f(480.f, 640.f));
  bloc8.setPosition(sf::Vector2f(560.f, 560.f));
  bloc9.setPosition(sf::Vector2f(640.f, 480.f));
  bloc10.setPosition(sf::Vector2f(720.f, 640.f));
  bloc11.setPosition(sf::Vector2f(800.f, 640.f));
  bloc12.setPosition(sf::Vector2f(880.f, 640.f));
  bloc13.setPosition(sf::Vector2f(960.f, 640.f));
  bloc14.setPosition(sf::Vector2f(1040.f, 640.f));
  bloc15.setPosition(sf::Vector2f(1120.f, 640.f));
  bloc16.setPosition(sf::Vector2f(1200.f, 640.f));
  bloc17.setPosition(sf::Vector2f(1280.f, 640.f));
  bloc18.setPosition(sf::Vector2f(1360.f, 640.f));
  bloc19.setPosition(sf::Vector2f(1440.f, 640.f));
  bloc20.setPosition(sf::Vector2f(1280.f, 560.f));
  bloc21.setPosition(sf::Vector2f(1200.f, 560.f));
  bloc22.setPosition(sf::Vector2f(1200.f, 480.f));
  bloc23.setPosition(sf::Vector2f(1120.f, 400.f));
  bloc24.setPosition(sf::Vector2f(1040.f, 400.f));
  bloc25.setPosition(sf::Vector2f(960.f, 400.f));
  bloc26.setPosition(sf::Vector2f(880.f, 400.f));
  bloc27.setPosition(sf::Vector2f(800.f, 400.f));
  
  window.draw(bloc1);
  window.draw(bloc2);
  window.draw(bloc3);
  window.draw(bloc4);
  window.draw(bloc5);
  window.draw(bloc6);
  window.draw(bloc7);
  window.draw(bloc8);
  window.draw(bloc9);
  window.draw(bloc10);
  window.draw(bloc11);
  window.draw(bloc12);
  window.draw(bloc13);
  window.draw(bloc14);
  window.draw(bloc15);
  window.draw(bloc16);
  window.draw(bloc17);
  window.draw(bloc18);
  window.draw(bloc19);
  window.draw(bloc20);
  window.draw(bloc21);
  window.draw(bloc22);
  window.draw(bloc23);
  window.draw(bloc24);
  window.draw(bloc25);
  window.draw(bloc26);
  window.draw(bloc27);
};

void initMap1()
{
  setBackgroundMap1();
  loadTexturesMap1();
  loadSpritesMap1();
  setSpriteTextureMap1();
  setPosSpriteMap1();
};
