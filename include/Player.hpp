#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Card.hpp"
#include <string>
#include <array>

// why is active and all_in diff?
// when a
enum class PlayerStatus {
	ACTIVE,
	FOLD,
	ALL_IN,
};

class Player {
    private:
	std::string name;
	int chips;
	std::array<Card, 2> cards;
	PlayerStatus status = PlayerStatus::ACTIVE;

    public:
	
	std::string getPlayerName() const;
	int getPlayerChips() const;
	std::array<Card, 2> getPlayerCards() const;
	PlayerStatus getPlayerState() const;

	std::string setPlayerName(std::string name) const;
	int setPlayerChips(int chips) const;
	std::array<Card, 2> setPlayerCards(std::array<Card, 2>) const;
	PlayerStatus setPlayerState(PlayerStatus state) const;

};

#endif
