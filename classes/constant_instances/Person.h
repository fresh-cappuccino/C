#ifndef _PERSON_H
#define _PERSON_H

#include <iostream>

class Person {
	private:
		std::string name;
		int age;

	public:
		Person();
		Person(std::string name, int age);
		~Person();

		std::string getName();
		void setName(std::string name);

		std::string getName() const;

		int getAge();
		void setAge(int age);

		int getAge() const;
};

#endif
