#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <SFML/Graphics.hpp>
#include "../include/move.hpp"


void jump(sf::Sprite)
{
  if (sf::keybord::isKeyPressed(sf::Keybord::Space) || sf::keybord::isKeyPressed(sf::Keybord::Z)) //appuyé une seule fois
    {
      if (sf::Sprite.getPosition().y == sf::Sprite.getPosition().y)
	{
	  return;
	}
      else
	{
	  sf::Sprite.move(0.f, 10.f);
	}

	  while (sf::keybord::isKeyPressed(sf::Keybord::Space) || sf::keybord::isKeyPressed(sf::Keybord::Z)) //appuyé en continu
	    {
	      if (sf::Sprite.getPosition().y == sf::Sprite.getPosition().y)
		{
		  return;
		}
	      else
		{
		  sf::Sprite.move(0.f, 5.f);
		}
	    }
	  while (sf::keybord::isKeyPressed(sf::Keybord::Space) && sf::keybord::isKeyPressed(sf::Keybord::D) || sf::keybord::isKeyPressed(sf::Keybord::Z) && sf::keybord::isKeyPressed(sf::Keybord::D))
	    {
	      if (sf::Sprite.getPosition().y == sf::Sprite.getPosition().y || sf::Sprite.getposition().x == sf::Sprite.getPosition().x)
		{
		  return;
		}
	      else
		{
		  sf::Sprite.move(3.f, 4.f);
		}
	    }
	  //partie où il retombe ici
    }
}
