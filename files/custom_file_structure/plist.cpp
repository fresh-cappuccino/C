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
	pl->setPrev(NULL);
	pl->setNext(NULL);
}

Players::~Players () {}

void Players::insert (Player player, int index) {
	if (index > nplayers || abs(index) > nplayers) { std::cout << "The element was not inserted!!\nInvalid index!!\n"; return; }

	if (index == nplayers || index == -1) push (player);

	else {
		plist *p = (plist*) malloc (sizeof (plist));

		if (!p) { std::cout << "INSUFICIENTE MEMORY!!\n"; return; }

		if (!(index)) {
			p->setNext(pl);
			p->setPrev(lastPL());
			pl->setPrev(p);
			pl = p;
		}

		else {
			plist *pPL = indexPL(index < 0 ? nplayers-index : index);

			if (!pPL) { std::cout << "INSUFICIENTE MEMORY!!\n"; return; }

			p->setNext(pPL);
			p->setPrev(pPL->getPrev());
			pPL->setPrev(p);
		}

		p->setPlayer(player);

		nplayers++;

		if (p->getPlayer().getId() > bigger) bigger = p->getPlayer().getId();
	}
}

void Players::push (Player player) {
	if (!(nplayers)) {
		pl->setPlayer(player);
		nplayers++;
		bigger = pl->getPlayer().getId();
	}

	else {
		plist *p = (plist*) malloc (sizeof (plist));
		plist *pPL = lastPL();

		if (!p || !pPL) { std::cout << "INSUFICIENT MEMORY!!!"; return; }

		p->setPlayer(player);

		pPL->setNext(p);
		p->setPrev(pPL);
		p->setNext(pl);
		pl->setPrev(p);

		nplayers++;

		if (p->getPlayer().getId() > bigger) bigger = p->getPlayer().getId();
	}
}

void Players::remove (int index) {
	if (index >= nplayers || abs(index) > nplayers) { std::cout << "Any element was removed!!\nIvalid index!\n"; return; }

	if (index == (nplayers-1)) { pop(); return; }

	else {
		if (!(index)) {
			if (pl->getPlayer().getId() == bigger) bigger--;

			pl = pl->getNext();
			pl->getPrev()->setPlayer(*(new Player));
			pl->getPrev()->setNext(NULL);
			pl->getPrev()->setPrev(NULL);
			free (pl->getPrev());
			pl->setPrev(nplayers <= 1 ? NULL : lastPL());
		}

		else {
			plist *pPL = indexPL(index < 0 ? nplayers-index : index);

			if (pPL->getPlayer().getId() == bigger) bigger--;

			pPL->getPrev()->setNext(pPL->getNext());
			pPL->getNext()->setPrev(pPL->getPrev());
			pPL->setPrev(NULL);
			pPL->setNext(NULL);
			pPL->setPlayer(*(new Player));
			free (pPL);
		}
		nplayers--;
	}
}

void Players::pop () {
	if (!(nplayers)) return;

	if (nplayers > 1) {
		plist *pPL = lastPL();

		pPL->getPrev()->setNext(nplayers <= 2 ? NULL : pl);
		pPL->setPlayer(*(new Player));
		pPL->setPrev(NULL);
		pPL->setNext(NULL);
		free (pPL);
		pl->setPrev(nplayers <= 2 ? NULL : lastPL());
	} else {
		pl->setNext(NULL);
		pl->setPlayer(*(new Player));
		pl->setPrev(NULL);
	}
	nplayers--;
}

long long Players::generateId() {
	return (++bigger);
}

plist* Players::lastPL () {
	return nplayers > 1 ? pl->getPrev() : pl;
}

plist* Players::indexPL (int index) {
	plist *pPL = pl;

	if (index < (nplayers/2))
		while (index--)
			pPL = pPL->getNext();
	else {
		index = nplayers - index;
		while (index--)
			pPL = pPL->getPrev();
	}

	return pPL;
}

void Players::printList () {
	plist *pPL = pl;

	for (int i=0; i<nplayers && pPL != NULL; i++) {
		std::cout << "ID: " << pPL->getPlayer().getId() << "\nNAME: " << pPL->getPlayer().getName() << "\nSCORE: " << pPL->getPlayer().getScore() << "\n\n";

		pPL = pPL->getNext();
	}
}

Player Players::getFirst () {
	return pl->getPlayer();
}

Player Players::getLast () {
	return lastPL()->getPlayer();
}

Player Players::getPlayer (int index) {
	if (index > (nplayers-1) || abs(index) > nplayers) { std::cout << "INVALID INDEX!!"; return *(new Player); }

	else {
		if (index < 0) return indexPL(nplayers-index)->getPlayer();
		else return indexPL(index)->getPlayer();
	}
}

Player Players::indexOf (long long id) {
	plist *pPL = pl;

	while (pPL->getNext() != NULL) {
		if (pPL->getPlayer().getId() == id)
			break;
		pPL = pPL->getNext();
	}

	if (pPL->getPlayer().getId() != id) {
		std::cout << "INVALID ID!!\n\n";
		return *(new Player);
	}

	return pPL->getPlayer();
}

int Players::getNplayers () {
	return nplayers;
}

bool Players::isEmpty () {
	return nplayers ? false : true;
}
