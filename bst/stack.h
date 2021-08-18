#ifndef _STACK_H
#define _STACK_H

#include"node.h"


class Stack {
private:
	Node* top;
public:
	Stack();
	void push(treeNode*);
	treeNode* pop();
	bool isFull();
	bool isEmpty();
	treeNode* showTop();
};

#endif