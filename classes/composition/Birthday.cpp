#include <iostream>

#include "Birthday.h"

Birthday::Birthday () {
	month=1;
	day=1;
	year=2000;
}

Birthday::Birthday (int month, int day, int year) {
	this->month=month;
	this->day=day;
	this->year=year;
}

Birthday::~Birthday() {}

int Birthday::getMonth () {
	return month;
}

void Birthday::setMonth (int month) {
	this->month=month;
}

int Birthday::getDay () {
	return day;
}

void Birthday::setDay (int day) {
	this->day=day;
}

int Birthday::getYear () {
	return year;
}

void Birthday::setYear (int year) {
	this->year=year;
}

std::string Birthday::getDate () {
	return std::to_string(getMonth()) + "/" + std::to_string(getDay()) + "/" + std::to_string(getYear());
}

void Birthday::setDate (int month, int day, int year) {
	this->month=month;
	this->day=day;
	this->year=year;
}
