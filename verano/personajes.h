#ifndef PERSONAJES_H
#define PERSONAJES_H
#include <SFML/Graphics.hpp>
class personaje:public sf::Sprite{
public:
    personaje();
    void mover();
private:
    sf::Texture textura_personaje;
};
#endif // PERSONAJES_H
