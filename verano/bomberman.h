#ifndef BOMBERMAN_H
#define BOMBERMAN_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System/Time.hpp>
#include "personajes.h"
#include "submuro.h"
#define alto 900
#define ancho 660
class bomber{
private:
    //creamos
    sf::RenderWindow window;
    sf::Texture fondo;
    sf::Sprite imagenfondo;
    //sf::Music music;
    personaje player;
    submuro pared;
public:
    bomber();
    void run();

};
#endif // BOMBERMAN_H
