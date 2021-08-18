#ifndef _STACK_H
#define _STACK_H

#include"node.h"

class Stack {
private:
	Node* top;
public:
	Stack();
	void push(int);
	int pop();
	bool isFull();
	bool isEmpty();
	int showTop();
};

#endif