#ifndef QUEUE_H
#define QUEUE_H

#include<iostream>
using namespace std;

class Queue {
private:
	enum {SIZE=15};
	int queue[SIZE];
	int rear, front;
public:
	Queue();
	void enQueue(int);
	int deQueue();
	bool isFULL();
	bool isEmpty();
	int showRear() const;
	int showFront() const;
};


#endif
