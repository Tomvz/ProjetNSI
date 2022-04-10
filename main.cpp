#include <SFML/Graphics.hpp>
#include "Grid.h"
#include <iostream>

int main()
{

	sf::RenderWindow* window = new sf::RenderWindow(sf::VideoMode(800, 800), "Sudoku");
	sf::Event e;

	Grid grille(window);

	while (window->isOpen())
	{
		while (window->pollEvent(e))
		{
			if (e.type == sf::Event::Closed)
			{
				window->close();
			}
		}

		window->clear(sf::Color(255, 255, 255));

		grille.draw();

		window->display();

	}

	return 0;
}