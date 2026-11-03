#include <iostream>
#include "Deck.hpp"
#include "Card.hpp"

using namespace std;

int main() {
  Deck deck;
  for (Card card : deck){
    cout << card.getSuit() << " " << card.getValue() << endl;
  }

}
