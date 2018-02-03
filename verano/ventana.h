#include "SFML/Graphics.hpp"
class ventana{
    static sf::RenderWindow w;
    w.create(sf::VideoMode(alto, ancho, 32), "", sf::Style::Close);
}
