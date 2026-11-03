#include "Deck.hpp"

#include <algorithm>
#include <random>

Deck::Deck() {
    int index = 0;

    for (char suit : SUITS){
      for (int value : VALUES){
        cards[index] = Card(value, suit);
        index++;
      }
    }
}

void Deck::shuffle() {
	std::random_device rd;
	std::mt19937 gen(rd());

	std::shuffle(cards.begin(), cards.end(), gen);
}
