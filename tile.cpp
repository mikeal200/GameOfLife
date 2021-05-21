#include "tile.h"
#include <SFML/Graphics.hpp>

Tile::Tile(float i, float j) {
    x = i;
    y = j;
}

Tile::Tile() {
}

void Tile::draw(sf::RenderWindow& window) {
    sf::RectangleShape square(sf::Vector2f(width - 1, height - 1));
    square.setPosition(x * width, y * height);
    square.setFillColor(sf::Color::White);
    
    window.draw(square);
}