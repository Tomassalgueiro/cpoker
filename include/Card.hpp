#ifndef CARD_HPP
#define CARD_HPP
#include <array>

constexpr std::array<char, 4> SUITS = {'H', 'C', 'D', 'S'};
constexpr std::array<int, 13> VALUES = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

// suits are defined as: "H" (hearts), "C" (clubs), "D" (diamonds), "S" (spades)
// values are defined as: 2-10, 11 for Jack, 12 for Queen and 13 for King, 14 for Ace
class Card {

    private:
        int value = 0; 
        char suit = '\0';

    public:
        Card() = default;
        Card(int value, char suit);

        char getSuit() const;
        int getValue() const;
};

#endif
