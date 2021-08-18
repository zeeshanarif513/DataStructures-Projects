#include"stack.h"

Stack::Stack()
{
	top = NULL;
}

void Stack::push(treeNode* add)
{
	Node* newNode = new Node();
	newNode->setAddres(add);
	newNode->setNext(top);
	top = newNode;
}

treeNode* Stack::pop()
{
	if (isEmpty()) {
		cout << "Stack is empty." << endl;
		system("pause");
		exit(0);
	}
	else {
		Node* temp = top;
		treeNode *add = top->getAddres();
		top = top->getNext();
		delete temp;
		return add;
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

treeNode* Stack::showTop()
{
	if (!isEmpty())
		return top->getAddres();
}