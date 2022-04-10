#include "Grid.h"

Grid::Grid(sf::RenderWindow *window)
{
	std::random_device rd{};
	std::mt19937 generator{rd()};
	std::uniform_int_distribution<int> dist{ 1, 9 };

	for (int y(0); y < 9; y++)
	{
		for (int x(0); x < 9; x++)
		{
			int n = dist(generator);
			while (!isValid(n, x, y))
			{
				n = dist(generator);
			}
			nb_map[y][x] = n;
		}
	}

	this->window = window;

}

bool Grid::isValid(int n, int x, int y)
{
	for (int i(0); i < 9; i++)
	{
		if (n == nb_map[y][i])
		{
			std::cout << n << " " << y << " " << x << " " << y << " " << i << std::endl;
			return false;
		}
		if (n == nb_map[i][x])
		{
			return false;
		}
	}

	for (int b(y / 3 * 3); b < y / 3 * 3 + 3; b++)
	{
		for (int a(x / 3 * 3); a < x / 3 * 3 + 3; a++)
		{
			if (nb_map[b][a] == n)
			{
				std::cout << "F" << std::endl;
				return false;
			}
		}
	}

	return true;

}

void Grid::draw()
{
	sf::RectangleShape grille(sf::Vector2f(window->getSize().x - 100, window->getSize().y - 100));
	this->window->draw(grille);

}

std::vector<std::vector<int>> Grid::getMap()
{
	return this->nb_map;
}