#include "bomberman.h"

bomber::bomber()
{
    // Creamos la ventana
	window.create(sf::VideoMode(alto, ancho, 32), "", sf::Style::Close);
	// Activa la sincronización vertical (60 fps)
	window.setVerticalSyncEnabled(true);

	// Cargamos la textura desde un archivo
	fondo.loadFromFile("fondo.jpg");
	// Asignamos la textura al sprite de fondo
	imagenfondo.setTexture(fondo);

	// Se carga la música de fondo
	//music.openFromFile("music.ogg");
	//music.setLoop(true);
	//music.play();Keyboard::isKeyPressed(Keyboard::Up)

}

void bomber::run()
{
	// Game Loop mientras la ventana esté abierta
	while (window.isOpen())
	{

		// Creamos un objeto evento
		sf::Event event;
		// Procesamos la pila de eventos
		while (window.pollEvent(event))
		{
			// Si el evento es de tipo Closed cerramos la ventana
			if (event.type == sf::Event::Closed)
				window.close();
		}

		// Actualizamos los elementos del juego
		player.mover();
		// Dibujamos los elementos del juego
		window.draw(imagenfondo);
		window.draw(player);

		// Actualizamos la ventana
		window.display();
	}
}
