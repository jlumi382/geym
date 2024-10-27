#include "core/Game.h"

Game::Game() 
    : window(sf::VideoMode(800, 600), "SFML Game") {
    // Initialize game state and variables
}

void Game::run() {
    while (window.isOpen()) {
        processEvents();
        update();
        render();
    }
}

void Game::processEvents() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
        }
    }
}

void Game::update() {
    // Update game state
}

void Game::render() {
    window.clear(sf::Color::Black);
    // Draw game objects here
    window.display();
}

