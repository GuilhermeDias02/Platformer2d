#ifndef COLLISION_H_
#define COLLISION_H_

void perso();
void move();
void colision();//fonction colision != variable collision
void gravity();
void jumping();
void jump();

sf::RectangleShape shape(sf::Vector2f(80.f, 80.f));
sf::Vector2f velocity;
sf::Vector2f position;
bool collision;
bool collisionB[50];
sf::Clock t0;
sf::Time elapsed = t0.getElapsedTime();
bool isJumping;

#endif