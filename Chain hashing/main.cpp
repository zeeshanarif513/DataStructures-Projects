#include"CHAIN_HASH.h"

int main() {
	Hash h;
	h.hash_func(23);
	h.hash_func(32);
	h.hash_func(60);
	h.hash_func(34);
	h.hash_func(34);
	h.hash_func(40);
	h.hash_func(45);
	h.hash_func(21);
	h.hash_func(34);
	h.hash_func(45);
	h.hash_func(12);
	h.hash_func(90);
	h.hash_func(77);
	h.hash_func(50);
	h.hash_func(91);
	h.hash_func(32);
	h.hash_func(10);
	h.hash_func(5);
	h.hash_func(23);
	h.Display();
	system("pause");
	return 0;
}