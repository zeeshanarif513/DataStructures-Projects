#ifndef LIST_H
#define LIST_H

#include"node.h"

class List {
private:
	Node* head;
	Node* curr;
	Node* preCurr;
	int size;
	friend ostream& operator<<(ostream&, List&);  //Overloading cout operator
public:
	List();
	void add(int);
	void insert(int);
	void start();
	int search(int);
	void delte(int);
	int length() const;
	void next();
	int getValue() const;
	void display();
};



#endif