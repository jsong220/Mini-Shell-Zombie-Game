/****************************************************************************
**Author: Myung Jin Song
**Date: 12-5-17
**Description: header file for Space class

contains pointers of Space class to represent moving to other rooms
*****************************************************************************/

#ifndef Space_hpp
#define Space_hpp

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

class Space {

public:
	Space();
	~Space();

	string spaceName;
	virtual string getSpaceName() = 0;

	Space *top;
	Space *bottom;
	Space *right;
	Space *left;

	virtual int recoverHealth() = 0;
	virtual int guessingGame() = 0;
	virtual int chooseBox(int) = 0;
	virtual int battle() = 0;
	virtual int fight() = 0;

};

#endif