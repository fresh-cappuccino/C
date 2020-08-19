#ifndef NUMBER_H
#define NUMBER_H

template <class V>
class Number {
	private:
		V a, b;

	public:
		Number ();
		Number (V a, V b);
		~Number ();

		V getA ();
		void setA (V a);

		V getB ();
		void setB (V b);

		V bigger ();
};

#endif
