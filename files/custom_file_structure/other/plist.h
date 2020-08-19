#ifndef PLIST_H
#define PLIST_H

#include "Player.h"

typedef struct plist {
		plist *prev;
		Player player;
		plist *next;
} plist;

class Players {
	private:
		plist *pl;
		int nplayers;
		long long bigger=0;

		plist* lastPL ();

		plist* indexPL (int index);

	public:
		Players ();

		~Players ();

		void insert (Player player, int index);

		void push (Player player);

		void remove (int index);

		void pop ();

		void printList ();

		Player getFirst ();

		Player getLast ();

		Player getPlayer (int index);

		Player indexOf (long long id);

		int getNplayers ();

		long long generateId ();

		bool isEmpty ();
};

#endif
