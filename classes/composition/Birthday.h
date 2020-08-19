#ifndef _BIRTHDAY_H
#define _BIRTHDAY_H

#include <iostream>

class Birthday {
	private:
		int month;
		int day;
		int year;

	public:
		Birthday ();
		Birthday (int month, int day, int year);
		~Birthday();

		int getMonth ();
		void setMonth (int month);

		int getDay ();
		void setDay (int day);

		int getYear ();
		void setYear (int year);

		std::string getDate ();
		void setDate (int month, int day, int year);
};

#endif
