#include <iostream>
using namespace std;
#include "personajes.h"
#include "bomba.h"
#include <SFML/Graphics.hpp>
using namespace sf;
personaje::personaje()
{
    //establecemos la textura del personaje
    textura_personaje.loadFromFile("Bomberman_2.jpg");
    this->setTexture(textura_personaje);

    // Establecemos el origen del personaje en su centro
    this->setOrigin(this->getLocalBounds().width/2.0f, this->getLocalBounds().height/2.0f);

    // Establecemos la posici�n del personaje en el centro de la ventana
    this->setPosition(800/2.0f, 800/2.0f);
    this->setScale(0.1,0.1);

}
//funcion de poner la bomba.
bomba *personaje::poner_bomba(){
    cout<<"entro";
    float h=this->getPosition().x;
    float j=this->getPosition().y;
    bomba *b=new bomba(h,j);
    return b;
    cout<<"salio";
}
void personaje::mover(){
    if(Keyboard::isKeyPressed(Keyboard::Up)){
        this->move(0,-1);
    }else if(Keyboard::isKeyPressed(Keyboard::Down)){
        this->move(0,1);
    }else if(Keyboard::isKeyPressed(Keyboard::Left)){
        this->move(-1,0);
    }else if(Keyboard::isKeyPressed(Keyboard::Right)){
        this->move(1,0);
    }
}

