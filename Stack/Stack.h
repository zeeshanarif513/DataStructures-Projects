#ifndef _STACK_H
#define _STACK_H

#include<iostream>
using namespace std;
class Stack {
private:
	enum  { SIZE=100 };
	char stack[SIZE];
	int top;
public:
	Stack();
	void push(char);
	char pop();
	bool isFull() const;
	bool isEmpty() const;
	char showtop() const;
};


#endif
