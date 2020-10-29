/****************************************************************************
**Author: Myung Jin Song
**Date: 12-5-17
**Description: header file for Armor Room class
*****************************************************************************/

#ifndef ArmorRoom_hpp
#define ArmorRoom_hpp

#include "Space.hpp"
#include "Player.hpp"

class ArmorRoom : public Space {
public:
	
	ArmorRoom();
	~ArmorRoom();

	int chooseBox(int);

	string getSpaceName();
	int recoverHealth() { return 0; }
	int guessingGame() { return 0; }
	int battle() { return 0; }
	int fight() { return 0; }
};

#endif