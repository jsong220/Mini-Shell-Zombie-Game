/****************************************************************************
**Author: Myung Jin Song
**Date: 12-5-17
**Description: derived from Space class.
Main function is the chooseBox function. This will allow player to choose
a box with 3 different outcomes. Selection 1 will lead to player decreased 
in health, selection 2 will reflect no changes to player but will waste 
players time, and selection 3 can either just waste time or increase health
*****************************************************************************/

#include "ArmorRoom.hpp"

ArmorRoom::ArmorRoom() {
	spaceName = "You are in the ArmorRoom";
}

ArmorRoom::~ArmorRoom() {

}

int ArmorRoom::chooseBox(int selection) {
	if (selection == 1) {
		cout << "Found food!! Lets eat!.." << endl;
		cout << "Food was spoiled..health decreased by 10" << endl;
	}

	else if (selection == 2) {
		cout << "Sorry..the box was empty..nothing happens" << endl;
	}

	else if (selection == 3) {
		int random = 1 + rand() % 2;

		if (random == 1) {
			cout << "Your found bulletproof vest that will help you survive!" << endl;
			cout << "5 points added to health" << endl;
			return 5;
		}
		else if (random == 2){
			cout << "Sorry..the box was empty..nothing happens" << endl;
			return 0;
		}
	}
}

string ArmorRoom::getSpaceName() {
	return spaceName;
}