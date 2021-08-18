#include"Queue.h"

Queue::Queue()
{
	rear = front = -1;
}

void Queue::enQueue(int val)
{
	if (isFULL())
		cout << "Queue is full." << endl;
	else {
		rear = (rear + 1) % SIZE;
		queue[rear] = val;
	}
	if (front == -1)
		front = rear;
}

int Queue::deQueue()
{
	if (isEmpty())
	{
		cout << "Queue is empty." << endl;
		system("pause");
		exit(0);
	}
	else {
		int val = queue[front];
		front = (front + 1) % SIZE;
		return val;
	}
}

bool Queue::isFULL()
{
	return front == (rear + 1) % SIZE;
}

bool Queue::isEmpty()
{
	return front == -1;
}

int Queue::showRear() const
{
	return queue[rear];
}

int Queue::showFront() const
{
	return queue[front];
}