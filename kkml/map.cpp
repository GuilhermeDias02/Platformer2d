#include "map.hpp"
 
 
Map::Map()
{

   if (!backgroundTexture.loadFromFile("background.png"))
{
// Erreur
  std::cout << "Erreur durant le chargement de l'image de background." <<std::endl;
}
 backgroundSize = sf::IntRect(0, 0, 1280, 720);
 background.setTextureRect(backgroundSize);
 background.setTexture(backgroundTexture);
 
}
 
 
void Map::drawBackground(sf::RenderWindow &window)
{
window.draw(background);
}
