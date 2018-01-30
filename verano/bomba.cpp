#include "bomba.h"
bomba::bomba(float x, float y){
    //establecemos la textura de la bomba
    textura_bomba.loadFromFile("bomba.jpg");
    this->setTexture(textura_bomba);
    // Establecemos el origen de la bomba
    this->setOrigin(this->getLocalBounds().width/2.0f, this->getLocalBounds().height/2.0f);
    // Establecemos la posición de la bomba
    this->setPosition(800/2.0f, 800/2.0f);
    this->setScale(0.1,0.1);
}

