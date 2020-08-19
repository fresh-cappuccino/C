#ifndef _PERSON_H
#define _PERSON_H

#include <iostream>

class Person {
	private:
		std::string name;
		int age;

	public:
		Person ();

		Person (std::string name, int age);

		~Person ();

		void setName (std::string name);

		std::string getName ();

		void setAge (int age);

		int getAge();

	friend void changeAge(Person &p);

};

void changeAge (Person &p);

#endif
