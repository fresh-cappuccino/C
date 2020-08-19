#include <fstream>
#include <iostream>

#include "Player.h"
#include "plist.h"

int main () {
	system ("clear");

	std::ifstream ifplayers ("players.iwa");

	Players players;

	long long id;
	std::string name;
	int score=0;

	if (ifplayers.is_open()) {
		std::string buffer;
		while (ifplayers >> buffer >> id >> buffer >> name >> buffer >> score) {
			players.push(*(new Player (id, name, score)));
		}
	}
	ifplayers.close();

	players.printList();

	//std::ofstream ofplayers ("players.iwa", std::ios_base::out | std::ios_base::app);
	std::ofstream ofplayers;
	ofplayers.open("players.iwa", std::fstream::app);

	if (ofplayers.is_open()) {
		while (true) {
			std::cout << "Enter the name of the player [press '!' to exit the loop]: " << std::endl;
			std::cin >> name;

			if (!(name.compare("!"))) break;

			std::cout << "Enter the score of the player [a negative score will exit the loop]: " << std::endl;
			std::cin >> score;

			if (score < 0) break;

			id = players.generateId();

			players.push(*(new Player(id, name, score)));

			ofplayers << "ID: " << id << " NAME: " << name << " SCORE: " << score << "\n";
		}
	}

	ofplayers.close();
}
