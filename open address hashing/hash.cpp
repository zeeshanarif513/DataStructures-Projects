#include"HASH.h"

int Hash::i = 0;

Hash::Hash() {
	int j;
	for (j = 0; j < table_size; j++)
		hash[j] = 0;
}

void Hash::Hash_func_1(int key) {
	//Linear probing:
	if (i > table_size) {
		cout << "Hash table is full!\n";
	}
	else {
		int index = ((key % table_size) + i) % table_size;
		if (hash[index] == 0)
			hash[index] = key;
		else {
			do {
				i++;
				index = ((index % table_size) + i) % table_size;
			} while (hash[index] != 0 && i < table_size);
			if (i < table_size)
				hash[index] = key;
			else {
				cout << "Hash table is full!\n";
			}
		}
	}
}

void Hash::Hash_func_2(int key) {
	//Quadratic probing:
	if (i > table_size) {
		cout << "Hash table is full!\n";
	}
	else {
		int index = ((key % table_size) + (i*i)) % table_size;
		if (hash[index] == 0)
			hash[index] = key;
		else {
			do {
				i++;
				index = ((index % table_size) + (i*i)) % table_size;
			} while (hash[index] != 0 && i < table_size);
			if (i < table_size)
				hash[index] = key;
			else {
				cout << "Hash table is full!\n";
			}
		}
	}
}

void Hash::Display() {
	int j;
	for (j = 0; j < table_size; j++)
		cout << "[" << j << "] : " << hash[j] << endl;
}