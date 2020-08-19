#ifndef _NUMBER_H
#define _NUMBER_H

class Number {
	private:
		int number;

	public:
		Number ();
		Number (int number);
		~Number ();

		Number operator+ (Number);

		int getNumber ();
		void setNumber (int number);
};

#endif
