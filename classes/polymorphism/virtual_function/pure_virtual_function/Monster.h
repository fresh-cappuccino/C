#ifndef MONSTER_H
#define MONSTER_H

#include "Enemy.h"

class Monster : public Enemy {
	private:
		bool goo;

	public:
		Monster ();
		Monster (int atk);
		Monster (bool goo);
		Monster (int atk, int def);
		Monster (int atk, bool goo);
		Monster (int atk, int def, bool goo);

		void attack ();
};

#endif
