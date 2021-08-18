#ifndef _QUEUE_H
#define _QUEUE_H

#include"node.h"

class Queue {
private:
	Node *rear, *front;
public:
	Queue();
	void enQueue(int);
	int deQueue();
	bool isEmpty();
	bool isFull();
	int showRear();
	int showFront();
};

#endif