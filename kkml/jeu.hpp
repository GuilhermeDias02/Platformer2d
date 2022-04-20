#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

#include"Player.hpp"
#include"map.hpp"
#include "menu.hpp"

class Game
{
private:
    sf::RenderWindow window;
    sf::Event ev;

    Player* player;
    Map* map;
    Menu* menu;
    
    void initWindow();
    void initMap();
    void initMenu();
    void initPlayer();
    bool menu1 = true;
  
public:

    Game();
  virtual ~Game();

    //Fonctions
    void updatePlayer();
    void updateCollision();
    void update();
    void renderPlayer();
    void renderMap();
    void renderMenu();
    void render();
  void game1();
  
    const sf::RenderWindow& getWindow() const;
  
};
