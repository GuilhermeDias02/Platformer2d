#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>


class Menu
  {
  public:

    //constructeur
    Menu();
    
    //Fonction
void drawMenu(sf::RenderWindow &window);

    
  private:
    sf::Texture jouer;
    sf::Sprite recupjouer;
    sf::Texture option;
    sf::Sprite recupoption;
    sf::Texture quitter;
    sf::Sprite recupquitter;
    sf::Music menu;
    sf::SoundBuffer bruitage;
    sf::Sound mu;
    int choix = 1;
    int music;
    bool menu1 = true;

    sf::Texture openoption;
    sf::Sprite bakayoko;
    bool entree = true;
};  
    
  
  

	  	
