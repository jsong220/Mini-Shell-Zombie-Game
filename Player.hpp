/****************************************************************************
**Author: Myung Jin Song
**Date: 12-5-17
**Description: header file for Player class
*****************************************************************************/

#ifndef Player_hpp
#define Player_hpp

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Player {
public:
	Player();
	~Player();

	int health;
	int strength;
	int defense;
	string name;

	void subHealth(int);
	void setStrength(int);
	void addDefense(int);
	void setName(string);
	void setHealth(int);

	void addHealth(int);


	int getHealth();
	int getStrength();
	int getDefense();

	void printStats();


};

#endif