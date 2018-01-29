#ifndef SUBMURO_H
#define SUBMURO_H
#include <SFML/Graphics.hpp>
#include "punto.h"

using namespace sf;
class submuro{
public:
    RectangleShape *cuerpo;
    /*RectangleShape c1);
    RectangleShape c2;
    RectangleShape c3;
    RectangleShape c4;
    RectangleShape c5;
    RectangleShape c6;
    RectangleShape c7;
    RectangleShape c8;
    RectangleShape c9;*/
    punto centro;
    submuro();
    submuro(punto);
    submuro(submuro &o);
    void dibujar(punto);
};

#endif

