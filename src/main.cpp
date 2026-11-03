#include <iostream>
#include "Deck.hpp"
#include "Card.hpp"


int main() {
	Deck deck;
	deck.shuffle();

	for (const Card& card : deck){
		std::cout << card.getSuit() << " " << card.getValue() << std::endl;
	}
}
