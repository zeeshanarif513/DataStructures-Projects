#ifndef _LIST_H
#define _LIST_H

#include"node.h"

class List {
private:
	Node *head, *curr;
	int size;
	friend ostream& operator<<(ostream&, List&);
	friend void SelectionSort(List&);
	friend void BubbleSort(List&);
	friend void InsertionSort(List&);
public:
	List();
	void add(int);
	int delte();
	bool search(int);
	bool next();
	void start();
	int getValue();
	int getlength();
	bool isEmpty();
	bool isFull();
};
#endif // !_LIST_H
