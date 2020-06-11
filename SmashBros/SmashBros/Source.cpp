#include <iostream>
#include <string>
//Add Sound Library
#include <Windows.h>
#include <MMSystem.h>
//Random Numb Libraries
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

int main() {

	int choice;
	srand(time(NULL));
	choice = rand() % 11;
	cout << "The Fighters are...\nMario\nLuigi\nDonkey Kong\nLink\nNess\nSamus\nYoshi\nCaptain Falcon\nKirby\nFox\nJiggly Puff\nPichaku" << endl;
	
	switch (choice)
	{
	case 1:
		cout << "Mario Wins!" << endl;
		break;
	case 2:
		cout << "Luigi Wins!" << endl;
		break;
	case 3:
		cout << "Donkey Kong Wins!" << endl;
		break;
	case 4:
		cout << "Link Wins!" << endl;
		break;
	case 5:
		cout << "Ness Wins!" << endl;
		break;
	case 6:
		cout << "Samus Wins!" << endl;
		break;
	case 7:
		cout << "Yoshi Wins!" << endl;
		break;
	case 8:
		cout << "Captain Falcon Wins!" << endl;
		break;
	case 9:
		cout << "Kirby Wins!" << endl;
		break;
	case 10:
		cout << "Fox Wins!" << endl;
		break;
	case 11:
		cout << "Jiggly Puff Wins!" << endl;
		break;
	case 12:
		cout << "Pikachu Wins!" << endl;
		break;
	default:
		break;
	}
	cout << endl;
	system("PAUSE");
	return 0;
}
