#ifndef MAP_H_
#define MAP_H_

void setBackgroundMap1();
void setKeyMap1();
void setBlocMap1();
void initMap1();

void setBackgroundMap2();
void setKeyMap2();
void setBlocMap2();
void initMap2();

int n=0;
sf::Sprite bloc[30];
sf::Sprite key;

sf::Texture keyT;

sf::Texture grass1;
sf::Texture grass2;
sf::Texture grass3;
sf::Texture grass4;

sf::Texture branch1;
sf::Texture branch2;
sf::Texture branch3;
sf::Texture branch4;

#endif