#include"CHAIN_HASH.h"

Hash::Hash() {
	int j;
	for (j = 0; j < table_size; j++) {
		hash[j].setdata(0);
		hash[j].setnext(NULL);
	}
}

void Hash::hash_func(int key) {
	int index = key%table_size;	
	if (hash[index].getdata() == 0)
		hash[index].setdata(key);
	else {
		if (hash[index].getnext() != NULL) {
			bool flag = false;
			Node* ptr = &hash[index], *pre_ptr = NULL;
			while (ptr) {
				if (ptr->getdata() == key) {
					flag = true;
					break;
				}
				pre_ptr = ptr;//this pointer holds address of last node
				ptr = ptr->getnext();
			}
			if (!flag) {//this flag maintain the uniqueness of data
				Node* temp = new Node();
				pre_ptr->setnext(temp);
				temp->setdata(key);
			}
			/*else
				cout << "Data already exits!\n";*/
		}
		else {
			Node* temp = new Node();
			hash[index].setnext(temp);
			temp->setdata(key);
		}
	}
}

void Hash::Display() {
	int j;
	for (j = 0; j < table_size; j++) {
		cout << "[" << j << "]: " << hash[j].getdata() << " ";
		Node* temp = &hash[j];
		temp = temp->getnext();
		while (temp) {
			cout << temp->getdata() << " ";
			temp = temp->getnext();
		}
		cout << endl;
	}
}