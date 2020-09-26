#include "Player.hpp"
#include <iostream>

Player::Player(int lives, int points) : lives_(lives), points_(points) {
    sf::Font font;
    if (!font.loadFromFile("../fonts/PWStrokes.ttf")) {
        // error...
        std::cout << "cant read font \n";
    }
    text_.setFont(font);

    text_.setString("Lives:        Points: ");
    text_.setCharacterSize(22);
    text_.setFillColor(sf::Color::Red);
    text_.setPosition(1, 1);
}
/*
sf::Text Player::printText() {
    sf::Font font;
    if (!font.loadFromFile("../fonts/PWStrokes.ttf")) {
        // error...
    }
    text_.setFont(font);
    text_.setString("Lives:        Points: ");
    text_.setCharacterSize(22);
    text_.setFillColor(sf::Color::Red);
    text_.setPosition(1, 1);

    return text_;
}
*/
void Player::update() {  // everything that changes in regards to paddle, moving, changing color, etc
}

void Player::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    states.transform *= getTransform();
    target.draw(text_, states);
}