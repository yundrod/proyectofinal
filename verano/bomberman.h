#ifndef BOMBERMAN_H
#define BOMBERMAN_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System/Time.hpp>
#include "personajes.h"
class bomber{
public:
    bomber();
    void run();
private:
    sf::RenderWindow window;

    sf::Texture fondo;
    sf::Sprite imagenfondo;
    //sf::Music music;
    personaje player;
};
#endif // BOMBERMAN_H
