#include "OBlock.hpp"

OBlock::OBlock(const sf::Vector2f& tileSize) : Block(tileSize)
{
    sf::Vector2i tiles0[] = {sf::Vector2i(0, 0), sf::Vector2i(0, 1), sf::Vector2i(1, 0), sf::Vector2i(1, 1)};
    sf::Vector2i tiles1[] = {sf::Vector2i(0, 0), sf::Vector2i(0, 1), sf::Vector2i(1, 0), sf::Vector2i(1, 1)};
    sf::Vector2i tiles2[] = {sf::Vector2i(0, 0), sf::Vector2i(0, 1), sf::Vector2i(1, 0), sf::Vector2i(1, 1)};
    sf::Vector2i tiles3[] = {sf::Vector2i(0, 0), sf::Vector2i(0, 1), sf::Vector2i(1, 0), sf::Vector2i(1, 1)};

    sf::Vector2i *tiles[] = {tiles0, tiles1, tiles2, tiles3};

    this->setTiles(tiles);

    this->setId(2);

    this->setStartOfset(0, 4);
    this->setOfset(0, 4);

    for (int i = 0; i < TILES_IN_FIGURE; i++)
    {
        this->rects[i].setFillColor(sf::Color(240, 240, 0));
    }
}