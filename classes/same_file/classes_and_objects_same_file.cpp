#include <iostream>

using namespace std;

class Person {
	private:
		string name;
		int age;

	public:
		Person () {
			name = "Name";
			age = 21;
		}

		Person (string name, int age) {
			this->name = name;
			this->age = age;
		}

		~Person () {}

		void setName (string name) {
			this->name = name;
		}

		string getName () {
			return name;
		}

		void setAge (int age) {
			this->age = age;
		}

		int getAge() {
			return age;
		}
};

int main () {
	Person person;
	string name;
	int age;

	cout << "Type the name of the person: ";
	getline(cin, name);
	person.setName(name);

	cout << "Type the age of the person: ";
	cin >> age;
	person.setAge(age);

	cout << "So, " << person.getName() << " is " << person.getAge() << " years old!";

	return 0;
}
