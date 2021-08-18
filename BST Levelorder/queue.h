#ifndef _QUEUE_H
#define _QUEUE_H

#include"node.h"

class Queue {
private:
	Node *rear, *front;
public:
	Queue();
	void enQueue(treeNode*);
	treeNode* deQueue();
	bool isEmpty();
	bool isFull();
	treeNode* showRear();
	treeNode* showFront();
};

#endif