#include <iostream>

using namespace std;

short si=13;

int main () {
	bool b = true;
	char c = 'C';
	double d = 0.123456789;
	float f = 0.5;
	int i = 0;
	long li = 123456789;
	long long lli = 12345678987654321;
	signed si = -12345;
	signed long sli = -123456789;
	signed long long slli = -1234567890987654321;
	string s = "string";
	unsigned ui = 12345;
	unsigned long uli = 123456789;
	unsigned long long ulli = 1234567890987654321;

	cout << "BOOL VAR               -->  " << b << endl;
	cout << "CHAR VAR               -->  " << c << endl;
	cout << "DOUBLE VAR             -->  " << d << endl;
	cout << "FLOAT VAR              -->  " << f << endl;
	cout << "INT VAR                -->  " << i << endl;
	cout << "LONG VAR               -->  " << li << endl;
	cout << "LONG LONG VAR          -->  " << lli << endl;
	cout << "SHORT VAR              -->  " << ::si << endl;
	cout << "SIGNED VAR             -->  " << si << endl;
	cout << "SIGNED LONG VAR        -->  " << sli << endl;
	cout << "SIGNED LONG LONG VAR   -->  " << slli << endl;
	cout << "STRING VAR             -->  " << s << endl;
	cout << "UNSIGNED VAR           -->  " << ui << endl;
	cout << "UNSIGNED LONG VAR      -->  " << uli << endl;
	cout << "UNSIGNED LONG LONG VAR -->  " << ulli << endl;

	return 0;
}
