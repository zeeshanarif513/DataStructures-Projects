#ifndef CHAIN_HASHING_H
#define CHAIN_HASHING_H
#include"NODE.h"
const int table_size = 11;
class Hash {
private:
	Node hash[table_size];

public:
	Hash();
	void hash_func(int);
	void Display();
};
#endif // !CHAIN_HASHING_H