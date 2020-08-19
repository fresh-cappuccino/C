#include <iostream>

#include "Ninja.h"

Ninja::Ninja () :
	shuriken (true)
{}

Ninja::Ninja (int atk) :
	Enemy (atk),
	shuriken (true)
{}

Ninja::Ninja (int atk, int def) :
	Enemy (atk, def),
	shuriken (true)
{}

Ninja::Ninja (int atk, bool shuriken) :
	Enemy (atk),
	shuriken (shuriken)
{}

Ninja::Ninja (int atk, int def, bool shuriken) :
	Enemy (atk, def),
	shuriken (shuriken)
{}

Ninja::~Ninja() {}

void Ninja::attack () {
	std::cout << "YOO!! I am a ninja and i give " << getAtk() << " of damage!" << std::endl;
	std::cout << "And I have " << getDef() << " of defense tho..." << std::endl << std::endl;
}
