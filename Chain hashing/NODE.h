#ifndef NODE_H
#define NODE_H
#include<iostream>
using namespace std;
class Node {
private:
	Node* next;
	int data;
public:
	Node() {
		next = NULL;
		data = 0;
	}
	void setnext(Node *ptr) {
		next = ptr;
	}
	void setdata(int val) {
		data = val;
	}
	Node* getnext() {
		return next;
	}
	int getdata() {
		return data;
	}
};
#endif // !NODE_H