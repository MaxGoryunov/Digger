#include "Game.h"

void Game::update(float dt) {
}

void Game::render() {
	window.clear();
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);
	this->window.draw(shape);
	window.display();
}
