#pragma once

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class Game {
private:
	sf::RenderWindow& window;
public:
	Game(sf::RenderWindow& window) : window(window) {}
	void update(float dt);
	void render();
};