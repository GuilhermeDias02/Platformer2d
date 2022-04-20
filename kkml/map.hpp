#include <SFML/Graphics.hpp>
#include <iostream>
 
class Map
{
public:
 
//Constructeur
Map();
 
//Fonctions
void drawBackground(sf::RenderWindow &window);

 
private:
 
//Background
sf::Texture backgroundTexture;
sf::Sprite background;
sf::IntRect backgroundSize; 
};
