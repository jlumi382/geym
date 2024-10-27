#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>

class Game {
public:
    Game();                // Constructor
    void run();           // Function to run the game loop

private:
    void processEvents(); // Handle events
    void update();        // Update game logic
    void render();        // Render the game
    sf::RenderWindow window; // Create a window
};

#endif // GAME_H

