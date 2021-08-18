#include"deque.h"

Deque::Deque()
{
	rear = front = -1;
}

void Deque::En_Rear(int val)
{
	if (isFULL())
		cout << "Deque is full." << endl;
	else {
		rear = (rear + 1) % SIZE;
		deque[rear] = val;
	}
	if (front == -1)
		front = rear;
}

void Deque::En_Front(int val)
{
	if (isFULL())
		cout << "Deque is full." << endl;
	else {
		if (front == -1)
			rear = front = 0;
		else if (front == 0)
			front = SIZE - 1;
		else
			front--;
		deque[front] = val;
	}
}

int Deque::Del_Front()
{
	if (isEmpty())
	{
		cout << "Deque is empty." << endl;
		system("pause");
		exit(0);
	}
	else {
		int val = deque[front];
		front = (front + 1) % SIZE;
		return val;
	}
}

int Deque::Del_Rear()
{
	if (isEmpty())
	{
		cout << "Deque is empty." << endl;
		system("pause");
		exit(0);
	}
	else {
		int val = deque[rear];
		if (rear == front)
			rear = front = -1;
		else if (rear == 0)
			rear = SIZE - 1;
		else
			rear--;
	}
}
bool Deque::isFULL()
{
	return front == (rear + 1) % SIZE;
}

bool Deque::isEmpty()
{
	return front == -1;
}

int Deque::showRear() const
{
	return deque[rear];
}

int Deque::showFront() const
{
	return deque[front];
}