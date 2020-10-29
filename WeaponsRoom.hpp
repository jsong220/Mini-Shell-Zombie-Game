/****************************************************************************
**Author: Myung Jin Song
**Date: 12-5-17
**Description: header file for Weapons Room class
*****************************************************************************/

#ifndef WeaponsRoom_hpp
#define WeaponsRoom_hpp

#include "Space.hpp"
#include "HospitalRoom.hpp"

class WeaponsRoom : public Space {
public:

	WeaponsRoom();
	string getSpaceName();

	int guessingGame();

	int recoverHealth() { return 0; }
	int chooseBox(int) { return 0; }
	int battle() { return 0; }
	int fight() { return 0; }

};

#endif