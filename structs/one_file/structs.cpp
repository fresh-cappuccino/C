#include <iostream>

typedef struct Person {
	private:
		std::string name;
		int age;
		long cpf;

	public:
		Person () :
			name ("Name"),
			age (18),
			cpf (11111111111)
		{}

		Person (std::string name) :
			name (name),
			age (18),
			cpf (11111111111)
		{}

		Person (int age) :
			name ("Name"),
			age (age),
			cpf (11111111111)
		{}

		Person (long cpf) :
			name ("Name"),
			age (18),
			cpf (cpf)
		{}

		Person (std::string name, int age, long cpf) :
			name (name),
			age (age),
			cpf (cpf)
		{}

		~Person () {}

		std::string getName () {
			return name;
		}

		void setName (std::string name) {
			this->name = name;
		}

		int getAge () {
			return age;
		}

		void setAge (int age) {
			this->age = age;
		}

		long getCpf () {
			return cpf;
		}

		void setCpf (long cpf) {
			this->cpf = cpf;
		}
} P;

int main () {
	Person p, person;

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
