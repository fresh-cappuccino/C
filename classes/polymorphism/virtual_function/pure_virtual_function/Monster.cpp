#include <iostream>

#include "Monster.h"

Monster::Monster () :
	goo (true)
{}

Monster::Monster (int atk) :
	Enemy (atk),
	goo (true)
{}

Monster::Monster (bool goo) :
	goo (goo)
{}

Monster::Monster (int atk, int def) :
	Enemy (atk, def),
	goo (true)
{}

Monster::Monster (int atk, bool goo) :
	Enemy (atk),
	goo (goo)
{}

Monster::Monster (int atk, int def, bool goo) :
	Enemy (atk, def),
	goo (goo)
{}

void Monster::attack () {
	std::cout << "HEEY!! I am the Monster and I give " << getAtk() << " of damage!!" << std::endl;
	std::cout << "And also... I have " << getDef() << " of defense!" << std::endl << std::endl;
}
