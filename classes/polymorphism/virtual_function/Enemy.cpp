#include <iostream>

#include "Enemy.h"

Enemy::Enemy () :
	atk (1),
	def (1)
{}

Enemy::Enemy (int atk) :
	atk (atk),
	def (1)
{}

Enemy::Enemy (int atk, int def) :
	atk (atk),
	def (def)
{}

Enemy::~Enemy () {}

int Enemy::getAtk () {
	return atk;
}

void Enemy::setAtk (int atk) {
	this->atk = atk;
}

int Enemy::getDef () {
	return def;
}

void Enemy::setDef (int def) {
	this->def = def;
}

void Enemy::attack () {
	std::cout << "I am the enemy that gives " << getAtk() << " of damage!!" << std::endl;
	std::cout << "And I have " << getDef() << " of defense!" << std::endl << std::endl;
}
