#ifndef _LIST_H
#define _LIST_H

#include"node.h"

class List {
private:
	Node* head;
	Node*curr;
	Node* prevCurr;
	int size;
public:
	List();
	void add(int);
	void start();
	bool search(int);
	void delte();
	int length() const;
	bool next();
	int getValue() const;
};

#endif