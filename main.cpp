/****************************************************************************
**Author: Myung Jin Song
**Description: Main file to test and run game. 

-6 spaces represented by rooms
//HINTS*****
//if health is close to 100 and strength is at least 20, most likely can defeat zombie.
//stacking health but no strength will most likely end in game over.

******************************************************************************/

#include "Player.hpp"
#include "Space.hpp"
#include "HospitalRoom.hpp"
#include "WeaponsRoom.hpp"
#include "ArmorRoom.hpp"
#include "NeganRoom.hpp"
#include "ZombieRoom.hpp"
#include "ExitRoom.hpp"
#include <time.h>
#include <stdlib.h>

int main() {   

	srand(time(NULL));
	Space *head = NULL;
	ExitRoom *exit = NULL;
	Player p;
	string direction;
	int rounds = 1;
	bool gameWon = 0;

	head = new HospitalRoom();
	head->top = new WeaponsRoom();
	head->bottom = new ArmorRoom();
	head->left = new NeganRoom();
	head->right = new ZombieRoom();

	cout << "************************************Introduction***************************************" << endl;
	cout << "You wake up in a hospital room." << endl;
	p.printStats();
	cout << "Through the windows, you can see there is an zombie apocalypse outside." << endl;
	cout << "In order to get out alive, you must defeat the horde of zombies and retrieve the key." << endl;
	cout << "You will only be able to escape if you have this key." << endl;
	cout << endl;
	cout << "************************************Instructions***************************************" << endl;
	cout << "There will be 6 total rooms in this game:" << endl;
	cout << "*Hospital Room" << endl;
	cout << "*Zombie room" << endl;
	cout << "*Negan's room" << endl;
	cout << "*Armor room" << endl;
	cout << "*Weapons room" << endl;
	cout << "*Exit room" << endl;
	cout << "You will start in the hospital room." << endl;
	cout << "Everytime you choose a room to enter, 1 minute will pass by." << endl;
	cout << "After 1 minute, you will return to the hospital room and will be able to choose another room" << endl;
	cout << "If you cannot escape within 10 minutes," << endl;
	cout << "the zombie horde will break into the hospital room and" << endl;
	cout << "Game Over" << endl;
	cout << endl;
	cout << "************************************Start Game***************************************" << endl;
	cout << "You see four doors leading to different rooms" << endl;

	while (rounds <= 10 && gameWon == 0 && p.getHealth() > 0) {

		cout << "Which direction do you want to go?" << endl;
		cout << "Pick top, bottom, left, or right room.." << endl;
		int check = 0;
		while (check == 0) {
			cin >> direction;

			if (direction == "top" || direction == "bottom" || direction == "right" || direction == "left") {
				check = 1;
			}
			else {
				cout << "Please only choose top, bottom, right, or left" << endl;
				cin.clear();
				cin.ignore();
			}
		}
		cout << endl;

		if (direction == "top") {
			int userGuess;
			int cpuGuess = head->top->guessingGame();

			cout << "You have entered a room with a gun on the desk!!" << endl;
			cout << "lets see if it has any ammo.." << endl;
			cout << "Enter a number from 1 to 5..." << endl;
			cout << "if the number you guessed matches computer number," << endl;
			cout << "gun will be filled with ammo, else it will be a useless blank gun" << endl;
			int check1 = 0;
			while (check1 == 0) {
				cin >> userGuess;

				if (userGuess >= 1 && userGuess <= 5) {
					check1 = 1;
				}
				else {
					cout << "Please only choose from selections 1 through 5" << endl;
					cin.clear();
					cin.ignore();
				}
			}

			if (userGuess == cpuGuess) {
				cout << "Gun has ammo! Your strength has increased by 10!" << endl;
				p.setStrength(10);
			}

			else if (userGuess != cpuGuess) {
				cout << "Gun is blank...nothing happens" << endl;
			}
		}
		else if (direction == "bottom") {

			int userBox;
			cout << "You have enetered a room filled with mysterious boxes" << endl;
			cout << "Please choose a box (enter a number 1 to 3)" << endl;
			int check2 = 0;
			while (check2 == 0) {
				cin >> userBox;

				if (userBox >= 1 && userBox <= 3) {
					check2 = 1;
				}
				else {
					cout << "Please only choose from selections 1 or 3" << endl;
					cin.clear();
					cin.ignore();
				}
			}

			if (userBox == 1) {
				head->bottom->chooseBox(1);
				p.subHealth(10);
			}

			else if (userBox == 2) {
				head->bottom->chooseBox(2);
			}

			else if (userBox == 3) {
				p.addDefense(head->bottom->chooseBox(3));
				p.addHealth(p.getDefense());
			}
		}
		else if (direction == "left") {
			cout << "You enter a room and see a menacing man holding a bat warpped in barb wire" << endl;
			cout << "It's evil Negan from the Savior gang!" << endl;
			cout << "Player will battle based on dice roll." << endl;
			cout << "Whoever has higher roll will win." << endl;
			cout << "If player wins, gain 5 strength else suffer the consequences.." << endl;

			int playerRoll = 1 + rand() % 10;
			int cpuRoll = head->left->fight();

			if (playerRoll > cpuRoll) {
				cout << "You defeated Negan! Strength increased by 5!" << endl;
				p.setStrength(5);
			}

			else if (playerRoll < cpuRoll) {
				cout << "Negan defeated you!" << endl;
				cout << "Luckily you escape death, but returned to hospital with minus 10 health.." << endl;
				p.subHealth(10);
			}
		}
		else if (direction == "right") {
			cout << "You have entered a room filled with zombies!!" << endl;
			cout << "But don't run! if you can defeat these zombies" << endl;
			cout << "you will escape and beat the game!" << endl;

			int zombieHealth = 100;
			int healthBefore = p.getHealth();
			int zombieAttack;
			int playerAttack;
			int exitLoop = 0;

			while (p.getHealth() > 0 && zombieHealth > 0 && exitLoop == 0) {
				
				zombieAttack = head->right->battle();
				playerAttack = p.getStrength();

				zombieHealth = zombieHealth - playerAttack;
				p.subHealth(zombieAttack);

				if (p.getHealth() <= 0) {
					cout << "You were not able to defeat the zombies.." << endl;
					cout << "You barely make it back to the hospital room but missing half your health." << endl;
					p.setHealth(healthBefore / 2);
					exitLoop = 1;
				}
				else if (zombieHealth <= 0) {
					cout << endl;
					cout << "You killed all the zombies and found the key!" << endl;
					cout << "You can enter the last room which should lead to an exit!" << endl;
					cout << endl;
					exit = new ExitRoom();
					if (exit->winGame() == 1) {
						cout << "As you enter the exit room and walk towards the exit..." << endl;
						cout << "Look out there's a zombie behind you!!!" << endl;
						cout << "Game Over" << endl;
						gameWon = 1;
					}

					else if (exit->winGame() == 2) {
						cout << "You walk towards the bright light" << endl;
						cout << "Door opens and you see a helicopter awaiting your escape!" << endl;
						cout << "You made it alive, you win!" << endl;
						gameWon = 1;
					}
				}
			}
		}

		if (gameWon == 0) {
			cout << endl;
			cout << "minutes passed: " << rounds << endl;

			int hospRecover = head->recoverHealth();

			cout << endl;
			cout << "You have returned to the hospital room where random amount of health will be restored or added" << endl;
			cout << hospRecover << " points added to health" << endl;
			p.addHealth(hospRecover);

			cout << endl;
			p.printStats();
			rounds++;
			cout << endl;

			if (p.getHealth() <= 0) {
				cout << "You have died.." << endl;
				gameWon = 1;
			}
		}
	}

	if (gameWon == 0) {
		cout << "You did not make it out within 10 minutes" << endl;
		cout << "The zombies broke into your room!!" << endl;
		cout << "Game Over" << endl;
	}
	if (gameWon == 1) {
		cout << "Goodbye" << endl;
	}

	delete head;
	delete exit;
	
	return 0;
}
