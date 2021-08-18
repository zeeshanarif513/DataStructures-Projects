#include "treenode.h"

treeNode::treeNode()
{
	left = right = NULL;
}

treeNode::treeNode(int val)
{
	data = val;
	left = right = NULL;
}

void treeNode::setData(int val)
{
	data = val;
}

int treeNode::getData()
{
	return data;
}

void treeNode::setLeft(treeNode* l)
{
	left = l;
}

treeNode* treeNode::getLeft()
{
	return left;
}

void treeNode::setRight(treeNode* r)
{
	right = r;
}

treeNode* treeNode::getRight()
{
	return right;
}