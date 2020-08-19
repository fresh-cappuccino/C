#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

class Player {
	private:
		long long id;
		std::string name;
		int score;

	public:
		Player ();
		Player (long long id, std::string name, int score);
		~Player ();

		long long getId ();

		void setId (long long id);

		std::string getName ();

		void setName (std::string name);

		int getScore ();

		void setScore (int score);
};

#endif
