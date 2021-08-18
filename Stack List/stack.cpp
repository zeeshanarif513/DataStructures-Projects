#include"stack.h"

Stack::Stack()
{
	top = NULL;
}

void Stack::push(int val)
{
	Node* newNode = new Node();
	newNode->setData(val);
	newNode->setNext(top);
	top = newNode;
}

int Stack::pop()
{
	if (isEmpty()) {
		cout << "Stack is empty." << endl;
		system("pause");
		exit(0);
	}
	else {
		Node* temp = top;
		int val = top->getData();
		top = top->getNext();
		delete temp;
		return val;
	}
}

bool Stack::isFull()
{
	return false;
}

bool Stack::isEmpty()
{
	if (top != NULL)
		return false;
	return true;
}

int Stack::showTop()
{
	if (!isEmpty())
		return top->getData();
	else {
		cout << "Stack is empty." << endl;
		system("pause");
		exit(0);
	}
}