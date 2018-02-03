#include "submuro.h"
submuro::~submuro(){
    delete []cuerpo;
}
submuro::submuro(){

    // cargamos la textura y la ponemos
    fondo_muro.loadFromFile("ladrillo.jpg");
    cuerpo=new Sprite[9];
    //asignamos textura y escala a todos los sprites
    for (int i=0;i<9;i++){
        cuerpo[i].setTexture(fondo_muro);
        cuerpo[i].setScale(0.34,0.34);
    }
    int x=200,y=200;
    //asignamos posicion de acuerdo a x,y
    cuerpo[0].setPosition(Vector2f(x-20,y-20));
    cuerpo[1].setPosition(Vector2f(x,y-20));
    cuerpo[2].setPosition(Vector2f(x+20,y-20));
    cuerpo[3].setPosition(Vector2f(x-20,y));
    cuerpo[4].setPosition(Vector2f(x,y));
    cuerpo[5].setPosition(Vector2f(x+20,y));
    cuerpo[6].setPosition(Vector2f(x-20,y+20));
    cuerpo[7].setPosition(Vector2f(x,y+20));
    cuerpo[8].setPosition(Vector2f(x+20,y+20));
}
