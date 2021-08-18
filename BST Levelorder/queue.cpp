#include"queue.h"

Queue::Queue()
{
	rear = front = NULL;
}

void Queue::enQueue(treeNode *a)
{
	Node *newNode = new Node();
	newNode->setAddres(a);
	newNode->setNext(NULL);
	if (rear != NULL) {
		rear->setNext(newNode);
		rear = newNode;
	}
	else
		rear = front = newNode;
}

treeNode* Queue::deQueue()
{
	if (isEmpty()) {
		cout << "Queue is empty." << endl;
		system("pause");
		exit(0);
	}
	else {
		Node *temp = front;
		treeNode* add = front->getAddres();
		front = front->getNext();
		if (front == NULL)
			rear = front;  //rear=NULL;
		delete temp;
		return add;
	}
}

bool Queue::isEmpty()
{
	if (rear == NULL)
		return true;
	return false;
}

bool Queue::isFull()
{
	return false;
}

treeNode* Queue::showRear()
{
	if (!isEmpty())
		return rear->getAddres();
	else {
		cout << "Queue is empty.";
		system("pause");
		exit(0);
	}
}

treeNode* Queue::showFront()
{
	if (!isEmpty())
		return front->getAddres();
	else {
		cout << "Queue is empty.";
		system("pause");
		exit(0);
	}

}