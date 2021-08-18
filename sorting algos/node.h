#ifndef _NODE_H
#define _NODE_H
#include<iostream>
using namespace std;

class Node {
private:
	int data;
	Node *prev, *next;
public:
	Node();
	void setData(int);
	int getData();
	void setPrev(Node*);
	Node* getPrev();
	void setNext(Node*);
	Node* getNext();
};



#endif // !_NODE_H
