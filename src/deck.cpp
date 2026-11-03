#include "Deck.hpp"

Deck::Deck() {
    int index = 0;

    for (char suit : SUITS){
      for (int value : VALUES){
        cards[index] = Card(value, suit);
        index++;
      }
    }
}
