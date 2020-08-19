#ifndef NINJA_H
#define NINJA_H

#include "Enemy.h"

class Ninja : public Enemy {
	private:
		bool shuriken;
	public:
		Ninja ();
		Ninja (int atk);
		Ninja (bool shuriken);
		Ninja (int atk, bool shuriken);
		Ninja (int atk, int def);
		Ninja (int atk, int def, bool shuriken);
		~Ninja();

		void attack ();
};

#endif
