#ifndef SUBMURO_H
#define SUBMURO_H
#include <SFML/Graphics.hpp>

using namespace sf;
class submuro{
public:
    Texture fondo_muro;
    Sprite *cuerpo;
    submuro();
    ~submuro();

    //void draw();
    void dibujar();

};

#endif

