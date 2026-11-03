#ifndef DECK_HPP
#define DECK_HPP
#include "Card.hpp"
#include <array>

// deck will just hold all 52 cards
class Deck {
	private:
	    std::array<Card, 52> cards;

    public:
        Deck();

        auto begin() { return cards.begin(); };
        auto end() { return cards.end(); };

        auto begin() const { return cards.begin(); };
        auto end() const { return cards.end(); };

};

#endif
