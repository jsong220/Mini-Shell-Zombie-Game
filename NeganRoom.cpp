/****************************************************************************
**Author: Myung Jin Song
**Description: derived from Space class
Main function is fight function which will generate random number. Based on 
player roll and this functions roll, player will be rewarded with increased 
strenght or penalized with a decrease in healtn. 
*****************************************************************************/

#include "NeganRoom.hpp"

NeganRoom::NeganRoom() {

}

NeganRoom::~NeganRoom() {

}

int NeganRoom::fight() {
	return 1 + rand() % 10;
}

string NeganRoom::getSpaceName() {
	return spaceName;
}
