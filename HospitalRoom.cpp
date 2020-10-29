/****************************************************************************
**Author: Myung Jin Song
**Date: 12-5-17
**Description: derived from Space class. 
Main function is the recoverHealth function which acts as a way
to restore random amounts of health for everytime player returns to hospital 
room. 
All other functions included but set to 0 as they are not used for this class
but needed for successful compiliation.
*****************************************************************************/

#include "HospitalRoom.hpp"

#include "Player.hpp"

HospitalRoom::HospitalRoom() {
	spaceName = "You are in the hospital";

}

string HospitalRoom::getSpaceName() {
	return spaceName;
}

int HospitalRoom::recoverHealth() {
	return 1 + rand() % 10;
}