#pragma once
#include "SFML/Graphics.hpp"

class GameGrid
{
private:
    int                cols;
    int                rows;
    float              tilePadding;
    sf::Vector2f       tileSize;

    int                **grid;
    sf::RectangleShape **tiles;

public:
    GameGrid(int rows, int cols, sf::Vector2f tile, float tilePadding);

    ~GameGrid();

    bool isInside(int rows, int cols) const;

    bool isEmpty(int rows, int cols) const;

    bool isRowFull(int row) const;

    bool isRowEmpty(int row) const;

    void drawGrid(sf::RenderWindow &window);

    int getTileId(int row, int col);

    void setTileId(int row, int col, int id);

    const sf::Vector2f &getTileSize();

    float getTilePadding();

    void clearRow(int row);

    void moveRowDown(int row, int numRows);

    int clearFullRows();
};