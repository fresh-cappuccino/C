#include <cstdlib>
#include <iostream>

#include "plist.h"

/*
 *
 *
 *
 */
Players::Players () :
	pl ((plist*)std::malloc(sizeof (plist))),
	nplayers (0)
{
	pl->prev = NULL;
	pl->next = NULL;
}

Players::~Players () {}

void Players::insert (Player player, int index) {
	if (index > nplayers || abs(index) > nplayers) { std::cout << "The element was not inserted!!\nInvalid index!!\n"; return; }

	if (index == nplayers || index == -1) push (player);

	else {
		plist *p = (plist*) malloc (sizeof (plist));

		if (!p) { std::cout << "INSUFICIENTE MEMORY!!\n"; return; }

		if (!(index)) {
			p->next = pl;
			p->prev = lastPL();
			pl->prev = p;
			pl = p;
		}

		else {
			plist *pPL = indexPL(index < 0 ? nplayers-index : index);

			if (!pPL) { std::cout << "INSUFICIENTE MEMORY!!\n"; return; }

			p->next = pPL;
			p->prev = pPL->prev;
			pPL->prev = p;
		}

		p->player = player;

		nplayers++;

		if (p->player.getId() > bigger) bigger = p->player.getId();
	}
}

void Players::push (Player player) {
	if (!(nplayers)) {
		pl->player = player;
		nplayers++;
		bigger = pl->player.getId();
	}

	else {
		plist *p = (plist*) malloc (sizeof (plist));
		plist *pPL = lastPL();

		if (!p || !pPL) { std::cout << "INSUFICIENT MEMORY!!!"; return; }

		p->player = player;

		pPL->next = p;
		p->prev = pPL;
		p->next = pl;
		pl->prev = p;

		nplayers++;

		if (p->player.getId() > bigger) bigger = p->player.getId();
	}
}

void Players::remove (int index) {
	if (index >= nplayers || abs(index) > nplayers) { std::cout << "Any element was removed!!\nIvalid index!\n"; return; }

	if (index == (nplayers-1)) { pop(); return; }

	else {
		if (!(index)) {
			if (pl->player.getId() == bigger) bigger--;

			pl = pl->next;
			pl->prev->player = *(new Player);
			pl->prev->next = NULL;
			pl->prev->prev = NULL;
			free (pl->prev);
			pl->prev = nplayers <= 1 ? NULL : lastPL();
		}

		else {
			plist *pPL = indexPL(index < 0 ? nplayers-index : index);

			if (pPL->player.getId() == bigger) bigger--;

			pPL->prev->next = pPL->next;
			pPL->next->prev = pPL->prev;
			pPL->prev = NULL;
			pPL->next = NULL;
			pPL->player = *(new Player);
			free (pPL);
		}
		nplayers--;
	}
}

void Players::pop () {
	if (!(nplayers)) return;

	if (nplayers > 1) {
		plist *pPL = lastPL();

		pPL->prev->next = nplayers <= 2 ? NULL : pl;
		pPL->player = *(new Player);
		pPL->prev = NULL;
		pPL->next = NULL;
		free (pPL);
		pl->prev = nplayers <= 2 ? NULL : lastPL();
	} else {
		pl->next = NULL;
		pl->player = *(new Player);
		pl->prev = NULL;
	}
	nplayers--;
}

long long Players::generateId() {
	return (++bigger);
}

plist* Players::lastPL () {
	return nplayers > 1 ? pl->prev : pl;
}

plist* Players::indexPL (int index) {
	plist *pPL = pl;

	if (index < (nplayers/2))
		while (index--)
			pPL = pPL->next;
	else {
		index = nplayers - index;
		while (index--)
			pPL = pPL->prev;
	}

	return pPL;
}

void Players::printList () {
	plist *pPL = pl;

	for (int i=0; i<nplayers && pPL != NULL; i++) {
		std::cout << "ID: " << pPL->player.getId() << "\nNAME: " << pPL->player.getName() << "\nSCORE: " << pPL->player.getScore() << "\n\n";

		pPL = pPL->next;
	}
}

Player Players::getFirst () {
	return pl->player;
}

Player Players::getLast () {
	return lastPL()->player;
}

Player Players::getPlayer (int index) {
	if (index > (nplayers-1) || abs(index) > nplayers) { std::cout << "INVALID INDEX!!"; return *(new Player); }

	else {
		if (index < 0) return indexPL(nplayers-index)->player;
		else return indexPL(index)->player;
	}
}

Player Players::indexOf (long long id) {
	plist *pPL = pl;

	while (pPL->next != NULL) {
		if (pPL->player.getId() == id)
			break;
		pPL = pPL->next;
	}

	if (pPL->player.getId() != id) {
		std::cout << "INVALID ID!!\n\n";
		return *(new Player);
	}

	return pPL->player;
}

int Players::getNplayers () {
	return nplayers;
}

bool Players::isEmpty () {
	return nplayers ? false : true;
}
