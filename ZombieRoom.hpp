/****************************************************************************
**Author: Myung Jin Song
**Date: 12-5-17
**Description: header file for Zombie Room class
*****************************************************************************/

#ifndef ZombieRoom_hpp
#define ZombieRoom_hpp

#include "Space.hpp"

class ZombieRoom :public Space {
public:
	ZombieRoom();
	~ZombieRoom();

	int battle();

	string getSpaceName();
	int recoverHealth() { return 0; }
	int guessingGame() { return 0; }
	int chooseBox(int) { return 0; }
	int fight() { return 0; }
};

#endif