#include "bomba.h"
bomba::bomba(float x, float y){
    //establecemos la textura de la bomba
    textura_bomba.loadFromFile("bomba.jpg");
    this->setTexture(textura_bomba);
    // Establecemos el origen de la bomba
    this->setOrigin(this->getLocalBounds().width/2.0f, this->getLocalBounds().height/2.0f);
    // Establecemos la posición de la bomba
    this->setPosition(x,y);
    this->setScale(1,1);
    //contador++;
}
bomba::bomba(){};

