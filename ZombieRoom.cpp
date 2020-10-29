/****************************************************************************
**Author: Myung Jin Song
**Date: 12-5-17
**Description: derived from Space class
Main function is the battle function. This will return an attack value that
represents the zombies attacking. To insure players cant go straight into
zombie room and beat the game, the battle function will roll 3 times which will
result in higher attack values for the zombie. 
*****************************************************************************/

#include "ZombieRoom.hpp"

ZombieRoom::ZombieRoom() {
	spaceName = "You are in the zombie room";
}

ZombieRoom::~ZombieRoom() {

}

string ZombieRoom::getSpaceName() {
	return spaceName;
}

int ZombieRoom::battle() {
	int zombieAttack = 0;
	int attack;

	for (int i = 0; i < 2; i++) {
		attack = 3 + rand() % 10;
		zombieAttack = zombieAttack + attack;
	}

	return zombieAttack;
}