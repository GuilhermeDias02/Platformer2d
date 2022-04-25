#include<iostream>
#include "jeu.hpp"
//#include "menu.hpp"

void Game::initWindow()
{
    window.create(sf::VideoMode(1280, 720), "Sonic Game", sf::Style::Close | sf::Style::Titlebar);
    window.setFramerateLimit(60);
}

void Game::initPlayer()
{
   player = new Player();
}

void Game::initMap()
{
   map = new Map();
}

void Game::initMenu()
{
   menu = new Menu();
}

Game::Game()
{
    initWindow();
    initPlayer();
    initMenu();
    initMap();
}

Game::~Game()
{
delete player;
}

void Game::updatePlayer()
{
    player->update();
}

void Game::updateCollision()
{
    //Collision bas de la fenêtre
   if (player->getPosition().y + player->getGlobalBounds().height > window.getSize().y)
  {       
      player->setPosition( player->getPosition().x, window.getSize().y - player->getGlobalBounds().height);
  }
   //Collision côté droit fenêtre
   if (player->getPosition().x + player->getGlobalBounds().width > window.getSize().x)
     {
       player->setPosition( window.getSize().x - player->getGlobalBounds().height, player->getPosition().y);
     }
}

void Game::update()
{
    while (window.pollEvent(ev))
    {
        if (ev.type == sf::Event::Closed)
            window.close();
	
        else if (ev.type == sf::Event::KeyPressed && ev.key.code == sf::Keyboard::Escape)
	  window.close();

	
        if (ev.type == sf::Event::KeyReleased && (ev.key.code == sf::Keyboard::Q || ev.key.code == sf::Keyboard::D || ev.key.code == sf::Keyboard::Space))
        {
            player->resetAnimationTimer();
        }
	
    }
    renderMenu();
    updatePlayer();

    updateCollision();
}

void Game::renderPlayer()
{
  std::cout<<"test1"<<std::endl;
    player->render(window);
}

void Game::renderMap()
{
  std::cout<<"test2"<<std::endl;
    map->drawBackground(window);
}

void Game::renderMenu()
{
  menu->drawMenu(window);
}

void Game::render()
{
  //window.clear();
  bool Render = true;
  while (Render == true)
    {
      update();
      window.clear();
      renderMap();
      renderPlayer();
      window.display();
      
    }
  
  /*  window.clear();
  std::cout << "render" << std::endl;
  //Render game
  if (menu5 == true)
    {
      menu6 = false;
      renderMenu();
    }
  
  if (menu6 == true)      
    {
      menu5 = false;
      renderMap();
      renderPlayer();
    }
    
    window.display();*/
}

void Game::game1()
{

initPlayer();
initMap();
updatePlayer();
 update();
renderPlayer();
renderMap();
 
}

const sf::RenderWindow & Game::getWindow() const
{
   
    return window;
}
