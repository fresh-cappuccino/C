#ifndef PERSON_H
#define PERSON_H

#include <iostream>

typedef struct Person {
	private:
		std::string name;
		int age;
		long cpf;

	public:
		Person ();

		Person (std::string name);

		Person (int age);

		Person (long cpf);

		Person (std::string name, int age, long cpf);

		~Person ();

		std::string getName ();

		void setName (std::string name);

		int getAge ();

		void setAge (int age);

		long getCpf ();

		void setCpf (long cpf);
} P;

#endif
