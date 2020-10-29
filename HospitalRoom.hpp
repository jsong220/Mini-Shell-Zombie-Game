/****************************************************************************
**Author: Myung Jin Song
**Description: header file for Hospital Room class
*****************************************************************************/

#ifndef HospitalRoom_hpp
#define HospitalRoom_hpp

#include "Space.hpp"
#include "WeaponsRoom.hpp"

class HospitalRoom : public Space {

public:

	HospitalRoom();
	string getSpaceName();
	int recoverHealth();

	int guessingGame() { return 0; }
	int chooseBox(int) { return 0; }
	int battle() { return 0; }
	int fight() { return 0; }


};

#endif
