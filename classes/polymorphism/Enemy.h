#ifndef ENEMY_H
#define ENEMY_H

class Enemy {
	protected:
		int atk;
		int def;

	public:
		Enemy ();
		Enemy (int atk);
		Enemy (int atk, int def);
		~Enemy ();

		int getAtk ();
		void setAtk (int atk);

		int getDef ();
		void setDef (int def);
};

#endif
