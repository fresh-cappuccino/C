#include <iostream>

#include "Person.h"

int main () {
	P p, person;

	typedef int I;

	int x;
	I y;

	person.setName("Leonardo");
	person.setAge(21);
	person.setCpf(12345678911);

	std::cout << "NAME: " << person.getName() << std::endl;
	std::cout << "AGE : " << person.getAge() << std::endl;
	std::cout << "CPF : " << person.getCpf() << std::endl << std::endl;

	p.setName("Jenny");
	p.setAge(19);
	p.setCpf(11987654321);

	std::cout << "NAME: " << p.getName() << std::endl;
	std::cout << "AGE : " << p.getAge() << std::endl;
	std::cout << "CPF : " << p.getCpf() << std::endl << std::endl;
}
