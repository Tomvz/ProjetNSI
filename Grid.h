#pragma once
#include <vector>
#include <random>
#include <iostream>
#include <SFML/Graphics.hpp>
class Grid
{

public:

	Grid(sf::RenderWindow *window);
	std::vector<std::vector<int>> getMap();
	void draw();
	bool isValid(int n, int x, int y);

private:

	std::vector<std::vector<int>> nb_map{ {0, 0, 0, 0, 0, 0, 0, 0, 0},
										  {0, 0, 0, 0, 0, 0, 0, 0, 0}, 
										  {0, 0, 0, 0, 0, 0, 0, 0, 0}, 
										  {0, 0, 0, 0, 0, 0, 0, 0, 0}, 
										  {0, 0, 0, 0, 0, 0, 0, 0, 0}, 
										  {0, 0, 0, 0, 0, 0, 0, 0, 0}, 
										  {0, 0, 0, 0, 0, 0, 0, 0, 0}, 
										  {0, 0, 0, 0, 0, 0, 0, 0, 0}, 
										  {0, 0, 0, 0, 0, 0, 0, 0, 0}, };
	sf::RenderWindow* window;
};

