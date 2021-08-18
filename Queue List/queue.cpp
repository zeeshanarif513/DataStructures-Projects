#include"queue.h"

Queue::Queue()
{
	rear = front = NULL;
}

void Queue::enQueue(int val)
{
	Node *newNode = new Node();
	newNode->setData(val);
	newNode->setNext(NULL);
	if (rear != NULL) {
		rear->setNext(newNode);
		rear = newNode;
	}
	else
		rear = front = newNode;
}

int Queue::deQueue()
{
	if (isEmpty()) {
		cout << "Queue is empty." << endl;
		system("pause");
		exit(0);
	}
	else {
		Node *temp = front;
		int val = front->getData();
		front = front->getNext();
		if (front == NULL)
			rear = front;  //rear=NULL;
		delete temp;
		return val;
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

int Queue::showRear()
{
	if (!isEmpty())
		return rear->getData();
	else {
		cout << "Queue is empty.";
		system("pause");
		exit(0);
	}
}

int Queue::showFront()
{
	if (!isEmpty())
		return front->getData();
	else {
		cout << "Queue is empty.";
		system("pause");
		exit(0);
	}

}