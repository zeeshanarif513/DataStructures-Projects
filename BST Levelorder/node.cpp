#include"node.h"

Node::Node()
{
	next = NULL;
}

void Node::setAddres(treeNode *a)
{
	address = a;
}

void Node::setNext(Node* n)
{
	next = n;
}

treeNode* Node::getAddres() const
{
	return address;
}

Node* Node::getNext() const
{
	return next;
}

