#include <iostream>

#include "Enemy.h"
#include "Monster.h"
#include "Ninja.h"

int main () {
	Ninja n;
	Monster m;

	Enemy *en = &n;
	Enemy *em = &m;

	en->setAtk(21);
	en->setDef(13);

	em->setAtk(24);
	em->setDef(21);

	en->attack();
	em->attack();

	// Don't need to overload a normal virtual function!!
}
