#include"node.h"

Node::Node()
{
	next = NULL;
}

void Node::setData(int d)
{
	data = d;
}

void Node::setNext(Node* n)
{
	next = n;
}

int Node::getData() const
{
	return data;
}

Node* Node::getNext() const
{
	return next;
}

