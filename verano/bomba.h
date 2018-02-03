#ifndef BOMBA_H
#define BOMBA_H
#include <SFML/Graphics.hpp>
class bomba: public sf::Sprite{
    sf::Texture textura_bomba;
public:
    static int contador;
    bomba(float x,float y);
    bomba();
    bomba(bomba &o){
        textura_bomba=o.textura_bomba;
    };
};

#endif // BOMBA_H
