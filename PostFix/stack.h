#ifndef _STACK_H
#define _STACK_H

#include<iostream>
using namespace std;
class Stack {
private:
	enum { SIZE = 100 };
	int stack[SIZE];
	int top;
public:
	Stack();
	void push(int);
	int pop();
	bool isFull() const;
	bool isEmpty() const;
	int showtop() const;
};

#endif
