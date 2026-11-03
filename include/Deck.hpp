#ifndef DECK_HPP
#define DECK_HPP
#include "card.hpp"
#include <array>

// deck will just hold all 52 cards
class Deck {
	private:
	    std::array<Card, 52> cards;

    public:
        Deck();

};

#endif
