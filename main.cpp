#include <SFML/Graphics.hpp>
#include <vector>
#include "tile.cpp"

const int cols = 20;
const int rows = 15;


int main()
{

    Tile tiles[cols][rows];
    sf::RenderWindow window(sf::VideoMode(800, 600), "Game of Life");

    Tile tile = Tile(0, 0);

    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            tiles[i][j] = Tile(i, j);
        }
    }


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        
        for(int i = 0; i < cols; i++) {
            for(int j = 0; j < rows; j++) {
                tiles[i][j].draw(window);
            }
        }

        window.display();
    }

    return 0;
}