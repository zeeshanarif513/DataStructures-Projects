#ifndef OPEN_ADDRESS_HASHING_H
#define OPEN_ADDRESS_HASHING_H
#include<iostream>
#include<iomanip>
using namespace std;
const int table_size = 11;
class Hash {
private:
	int hash[table_size];
	static int i;
		
public:
	Hash();
	void Hash_func_1(int);//Linear probing
	void Hash_func_2(int);//Quadratic probing
	void Display();

};
#endif // !OPEN_ADDRESS_HASHING_H