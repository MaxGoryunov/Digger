#include <SFML\Graphics.hpp>
#include <SFML\System\Clock.hpp>
#include <SFML\Window\Keyboard.hpp>
#include <SFML\Window\Mouse.hpp>
#include <iostream>
#include "Game.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(1000, 800), "Digger");
    Game game = Game(window);
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        game.update(0.1);
        game.render();
    }

	return 0;
}