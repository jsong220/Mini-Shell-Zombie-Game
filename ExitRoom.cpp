/****************************************************************************
**Author: Myung Jin Song
**Description: Stand alone class which represents the final stage.
The winGame function will give user 50/50 chance of winning the game if rolled
a 2 or user can still lose if rolled a 1.
*****************************************************************************/

#include "ExitRoom.hpp"

ExitRoom::ExitRoom() {

}

ExitRoom::~ExitRoom() {

}

int ExitRoom::winGame() {
	return 1 + rand() % 2;
}
