#include <iostream>
#include "card.h"
#include "table.h"
#include "player.h"
#include "gameManager.h"

int main() {
	Player player1, player2, player3;
	std::vector<Player> l = { player1,player2,player3 };
	GameManager gamemanager( l, 20 );
	return 0;
}