/****************************************************************************
**Author: Myung Jin Song
**Date: 12-5-17
**Description: header file for Negans Room class
*****************************************************************************/

#ifndef NeganRoom_hpp
#define NeganRoom_hpp

#include "Space.hpp"

class NeganRoom : public Space {
public:

	NeganRoom();
	~NeganRoom();

	int fight();

	string getSpaceName();

	int battle() { return 0; }
	int recoverHealth() { return 0; }
	int guessingGame() { return 0; }
	int chooseBox(int) { return 0; }
};

#endif