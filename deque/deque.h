#ifndef QUEUE_H
#define QUEUE_H

#include<iostream>
using namespace std;

class Deque {
private:
	enum { SIZE = 5 };
	int deque[SIZE];
	int rear, front;
public:
	Deque();
	void En_Rear(int);
	void En_Front(int);
	int Del_Front();
	int Del_Rear();
	bool isFULL();
	bool isEmpty();
	int showRear() const;
	int showFront() const;
};


#endif
