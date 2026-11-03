#include "Card.hpp"

Card::Card(int value, char suit){
    this->value = value;
    this->suit = suit;
}

int Card::getValue() const {
    return value;
}

char Card::getSuit() const {
    return suit;
}
