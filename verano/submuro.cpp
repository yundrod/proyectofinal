#include "submuro.h"

submuro::submuro(){}
submuro::submuro(punto o){
    cuerpo=new RectangleShape[9];
    centro=o;
    for (int i;i<9;i++){
        (cuerpo+i)->setSize(Vector2f(20,20));
    }
    cuerpo[0].setPosition(Vector2f(centro.a-20,centro.b-20));
    cuerpo[1].setPosition(Vector2f(centro.a,centro.b-20));
    cuerpo[2].setPosition(Vector2f(centro.a+20,centro.b-20));
    cuerpo[3].setPosition(Vector2f(centro.a-20,centro.b));
    cuerpo[4].setPosition(Vector2f(centro.a,centro.b));
    cuerpo[5].setPosition(Vector2f(centro.a-20,centro.b));
    cuerpo[6].setPosition(Vector2f(centro.a-20,centro.b+20));
    cuerpo[7].setPosition(Vector2f(centro.a,centro.b+20));
    cuerpo[8].setPosition(Vector2f(centro.a+20,centro.b+20));

}


