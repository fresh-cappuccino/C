#include <iostream>

#include "Player.h"

Player::Player () :
	id (0),
	name ("Player"),
	score (0)
{}

Player::Player (long long id, std::string name, int score) :
	id (id),
	name (name),
	score (score)
{}

Player::~Player () {}

long long Player::getId () {
	return id;
}

void Player::setId (long long id) {
	this->id = id;
}

std::string Player::getName () {
	return name;
}

void Player::setName (std::string name) {
	this->name = name;
}

int Player::getScore () {
	return score;
}

void Player::setScore (int score) {
	this->score = score;
}

