#include"list.h"

List::List()
{
	head = new Node;
	head->setNext(NULL);
	curr = prevCurr = NULL;
	size = 0;
}

void List::add(int d)
{
	Node* newNode = new Node;
	newNode->setData(d);
	newNode->setNext(NULL);
	if (curr != NULL)
	{
		newNode->setNext(curr->getNext());
		curr->setNext(newNode);
		prevCurr = curr;
		curr = newNode;
	}
	else {
		newNode->setNext(head->getNext());
		head->setNext(newNode);
		prevCurr = head;
		curr = newNode;
	}
	size++;
}

void List::start()
{
	prevCurr = curr = head;
}

bool List::search(int val)
{
	if (size)
	{
		start();
		curr = curr->getNext();
		while (curr)
		{
			if (curr->getData() == val)
				return true;
			prevCurr = curr;
			curr = curr->getNext();
		}
		return false;
	}
}
void List::delte()
{
	if (curr != NULL && size != 0)
	{
		prevCurr->setNext(curr->getNext());
		delete curr;
		curr = prevCurr->getNext();
		size--;
	}
}
int List::length() const
{
	return size;
}

bool List::next()
{
	if (curr != NULL && size != 0)
	{
		prevCurr = curr;
		curr = curr->getNext();
		return (curr!=NULL) ? true : false;
	}
		return false;
}
int List::getValue() const
{
		return curr->getData();
}