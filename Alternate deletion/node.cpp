#include"node.h"

Node::Node()
{
	prev = next = NULL;
}

void  Node::setData(int d)
{
	data = d;
}

int Node::getData()
{
	return data;
}

void Node::setPrev(Node* p)
{
	prev = p;
}

Node* Node::getPrev()
{
	return prev;
}

void Node::setNext(Node* n)
{
	next = n;
}

Node* Node::getNext()
{
	return next;
}