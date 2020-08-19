#ifndef NUMBER_H
#define NUMBER_H

template <class V>
class Number {
	private:
		V a, b;

	public:
		Number () {}

		Number (V a, V b) :
			a (a),
			b (b)
		{}

		~Number () {}

		V getA () {
			return a;
		}

		void setA (V a) {
			this->a = a;
		}

		V getB () {
			return b;
		}

		void setB (V b) {
			this->b = b;
		}

		V bigger () {
			return a > b ? a : b;
		}
};

#endif
