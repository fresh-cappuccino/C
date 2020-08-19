#ifndef MOTHER_H
#define MOTHER_H

class Mother {
	public:
		int public_v = 1;
		Mother ();
		~Mother ();
		void hello ();

	protected:
		int protected_v = 2;

	private:
		int private_v = 3;
};

#endif
