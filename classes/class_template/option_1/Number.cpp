#include <iostream>

#include "Number.h"

template <class V>
Number<V>::Number () {}

template <class V>
Number<V>::Number (V a, V b) :
	a (a),
	b (b)
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
V Number<V>::getB () {
	return b;
}

template <class V>
void Number<V>::setB (V b) {
	this->b = b;
}

template <class V>
V Number<V>::bigger () {
	return a > b ? a : b;
}

template class Number<int>;
template class Number<double>;
