#ifndef BOMBA_H
#define BOMBA_H
#include <SFML/Graphics.hpp>
class bomba: public sf::Sprite{
    sf::Texture textura_bomba;
public:
    bomba(float x,float y);
};

#endif // BOMBA_H
