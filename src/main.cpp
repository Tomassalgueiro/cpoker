#include <iostream>
#include "Deck.hpp"
#include "Card.hpp"


int main() {
	Deck deck;
	deck.shuffle();
	std::optional<Card> var = deck.dealCards();

	if (var != std::nullopt) {
		std::cout << var->getSuit() << " " << var->getValue() << std::endl;
	}
	else {
		std::cout << " lol " << std::endl;
	}

}
