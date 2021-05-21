#include <SFML/Graphics.hpp>

#ifndef TILE_H
#define TILE_H

class Tile {
public:
    int x, y;
    Tile(float i, float j);
    Tile();
    void draw(sf::RenderWindow& window);
    float width = 800 / 20;
    float height = 600 / 15;
};

#endif