/****************************************************************************
**Author: Myung Jin Song
**Description: Player class to set and control user attributes. 
Defense and strength is always increased if changed throughout the game
and therefore only has increase functions.

Health can be decreased or increased based on game outcomes, therefore 
health has subtract and addition functions. Also, get functions to retrieve 
all the attributes for the player. 

Print function will display updated player attributes after each round. 
*****************************************************************************/

#include "Player.hpp"

Player::Player() {
	health = 100;
	strength = 1;
	defense = 0;
	name = "Rick Grimes";
}

Player::~Player() {

}

void Player::subHealth(int h) {
	health = health - h;
}

void Player::setStrength(int s) {
	strength = strength + s;
}

void Player::addDefense(int d) {
	defense = defense + d;
}

void Player::setName(string name) {
	this->name = name;
}

void Player::setHealth(int hpOveride) {
	health = hpOveride;
}

int Player::getHealth() {
	return health;
}

int Player::getStrength() {
	return strength;
}

int Player::getDefense() {
	return defense;
}


void Player::addHealth(int hp) {
	health = health + hp;
}

void Player::printStats() {
	cout << "Name:" << name << endl;
 	cout << "Health: " << health << endl;
	cout << "Strength: " << strength << endl;
	cout << "Defense: " << defense << endl;

}
