#ifndef NODE_H
#define NODE_H

#include<iostream>
using namespace std;


class Node {
private:
	int data;
	Node * next;
public:
	Node();
	void setData(int);
	void setNext(Node*);
	int getData() const;
	Node* getNext() const;
};

#endif