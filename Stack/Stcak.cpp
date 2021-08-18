#include"Stack.h"

Stack::Stack()
{
	top = -1;
}

void Stack::push(char val)
{
	if (isFull())
	{
		cout << "Stack is full." << endl;
	}
	top++;
	stack[top] = val;
}

char Stack::pop()
{
	if (isEmpty())
	{
		cout << "Stack is empty." << endl;
		system("pause");
		exit(0);
	}
	char val = stack[top];
	top--;
	return val;
}

bool Stack::isFull() const
{
	return top == SIZE - 1;
}

bool Stack::isEmpty() const
{
	return top == -1;
}

char Stack::showtop() const
{
	return stack[top];
}