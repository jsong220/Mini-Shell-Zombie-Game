/****************************************************************************
**Author: Myung Jin Song
**Date: 12-5-17
**Description: derived from Space Class. 
Main function is guessingGame, which purpose is to generate a random number
that the player will try to guess. If correct, player will be rewarded with
extra strength. 
*****************************************************************************/

#include "WeaponsRoom.hpp"

WeaponsRoom::WeaponsRoom() {
	spaceName = "You are in the weapons room";
}

string WeaponsRoom::getSpaceName() {
	return spaceName;
}

int WeaponsRoom::guessingGame() {
	return 1 + rand() % 5;
}