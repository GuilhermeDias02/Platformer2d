#ifndef JUMP_H_
#define JUMP_H_

void perso();
void move();
void colision();
void gravity();
void jumping();
void jump();

sf::RectangleShape shape(sf::Vector2f(80.f, 80.f));
sf::Vector2f velocity;
sf::Vector2f position;
bool collision;
sf::Clock t0;
sf::Time elapsed = t0.getElapsedTime();
bool isJumping;

#endif