#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>

template <class V>
class Number {
	private:
		V a;

	public:
		Number ();
		Number (V a);
		~Number ();

		V getA ();
		void setA (V a);

		V operator+ (Number);

		void type ();
};

template <class V>
Number<V>::Number () :
	a (0)
{}

template <class V>
Number<V>::Number (V a) :
	a (a)
{}

template <class V>
Number<V>::~Number () {}

template <class V>
V Number<V>::getA () {
	return a;
}

template <class V>
void Number<V>::setA (V a) {
	this->a = a;
}

template <class V>
V Number<V>::operator+ (Number n) {
	return this->a + n.getA();
}

template <class V>
void Number<V>::type () {
	std::cout << "I am a number!";
}

template<>
class Number<char> {
	private:
		char c;
	public:
		Number ();
		Number (char c);
		~Number ();

		char getC ();
		void setC (char c);

		void type ();
};

Number<char>::Number () :
	c ('0')
{}

Number<char>::Number (char c) :
	c (c)
{}

Number<char>::~Number () {}

char Number<char>::getC () {
	return c;
}

void Number<char>::setC (char c) {
	this->c = c;
}

void Number<char>::type () {
	std::cout << "I am a character!";
}

template<>
class Number<std::string> {
	private:
		std::string s;
	public:
		Number ();
		Number (std::string s);
		~Number ();

		std::string getS ();
		void setS (std::string s);

		void type ();
};

Number<std::string>::Number () :
	s ("string")
{}

Number<std::string>::Number (std::string s) :
	s (s)
{}

Number<std::string>::~Number () {}

std::string Number<std::string>::getS () {
	return s;
}

void Number<std::string>::setS (std::string s) {
	this->s = s;
}

void Number<std::string>::type () {
	std::cout << "I am a string!";
}

#endif
