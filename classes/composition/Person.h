#ifndef _PERSON_H
#define _PERSON_H

#include <iostream>

#include "Birthday.h"

class Person {
	private:
		std::string name;
		Birthday birthdayObject;

	public:
		Person ();
		Person (std::string name, Birthday birthday);
		~Person ();

		std::string getName();
		void setName(std::string name);

		std::string getBirthday ();
		void setBirthday (int month, int day, int year);
		void setBirthday (Birthday birthday);

		void personInfo();
};

#endif
