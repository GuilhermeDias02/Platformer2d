#include <iostream>
#include "jeu.hpp"


int main()
{
  
    Game game;

    while (game.getWindow().isOpen())
    {
      
        game.update();
	//game.render();
    }

    return 0;
}
