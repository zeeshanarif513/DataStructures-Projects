#include"list.h"

List::List()
{
	head = curr = NULL;
	size = 0;
}

void List::add(int val)
{
	Node *newNode = new Node;
	newNode->setData(val);
	if (isEmpty())
	{
		newNode->setPrev(NULL);
		newNode->setNext(NULL);
		head = curr = newNode;
	}
	else
	{
		newNode->setNext(curr->getNext());
		newNode->setPrev(curr);
		curr->setNext(newNode);
		if (newNode->getNext())
			newNode->getNext()->setPrev(newNode);
		curr = newNode;
	}
	size++;
}

int List::delte()
{
	if (isEmpty())
	{
		cout << "List is Empty\nProgram crash.";
		system("pause");
		exit(0);
	}
	else
	{
		int val = curr->getData();
		Node *temp = curr;
		curr = curr->getNext();
		if (temp != head)
			temp->getPrev()->setNext(curr);
		else
			head = head->getNext();
		if (curr)  //curr!=NULL
			curr->setPrev(temp->getPrev());
		delete temp;
		size--;
		return val;
	}
}

bool List::search(int dat)
{
	if (isEmpty())
	{
		cout << "List is Empty\nProgram crash.";
		system("pause");
		exit(0);
	}
	else
	{
		start();
		for (int i = 0;i < size;i++)
		{
			if (curr->getData() == dat)
				return true;
			next();
		}
		return false;

	}
}

bool List::next()
{
	if (!isEmpty()) {
		curr = curr->getNext();
		return true;
	}
	return false;
}

void List::start()
{
	curr = head;
}

int List::getValue()
{
	if (isEmpty())
	{
		cout << "List is Empty\nProgram crash.";
		system("pause");
		exit(0);
	}
	return curr->getData();
}

int List::getlength()
{
	return size;
}

bool List::isEmpty()
{
	return size == 0;
}

bool List::isFull()
{
	return false;
}