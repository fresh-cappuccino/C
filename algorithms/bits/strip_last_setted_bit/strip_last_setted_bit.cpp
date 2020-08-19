#include <iostream>

// funćão para verificar o bit ativo menos significativo de um dado número e setar o mesmo para 0
template <class T>
void strip_last_setted_bit (T & num) {
	num &= (num-1);
}

int main () {
	int num=121;

	strip_last_setted_bit(num);

	std::cout << num;
}
