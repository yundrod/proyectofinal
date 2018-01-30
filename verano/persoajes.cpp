#include "personajes.h"
#include "bomba.h"
#include <SFML/Graphics.hpp>
using namespace sf;
personaje::personaje()
: sf::Sprite()
{
    //establecemos la textura del personaje
    textura_personaje.loadFromFile("Bomberman_2.jpg");
    this->setTexture(textura_personaje);

    // Establecemos el origen del personaje en su centro
    this->setOrigin(this->getLocalBounds().width/2.0f, this->getLocalBounds().height/2.0f);

    // Establecemos la posición del personaje en el centro de la ventana
    this->setPosition(800/2.0f, 800/2.0f);
    this->setScale(0.1,0.1);
}
//movemos el personaje segun las flechas
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
