#ifndef PERSONAJES_H
#define PERSONAJES_H
#include <SFML/Graphics.hpp>
#include "bomba.h"
class personaje:public sf::Sprite{
public:
    personaje();
    void mover();
    bomba *poner_bomba();
private:
    sf::Texture textura_personaje;
};
#endif // PERSONAJES_H















