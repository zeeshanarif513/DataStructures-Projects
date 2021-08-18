#include "bst.h"

BST::BST()
{
	root = NULL;
}

void BST::insert(int val)
{
	treeNode *newNode = new treeNode;
	newNode->setData(val);
	if (root == NULL)
		root = newNode;
	else {
		treeNode *parent, *loc;
		parent = loc = root;
		while (val != parent->getData() && loc != NULL)
		{
			parent = loc;
			if (val < parent->getData())
				loc = parent->getLeft();
			else
				loc = parent->getRight();
		}
		if (val == parent->getData())
			cout << "Duplicate." << endl;
		else if (val < parent->getData())
			parent->setLeft(newNode);
		else
			parent->setRight(newNode);
	}
}

bool BST::search(int val)
{
	treeNode *loc = root;
	while (loc)
	{
		if (val == loc->getData())
			return true;
		else if (val < loc->getData())
			loc = loc->getLeft();
		else
			loc = loc->getRight();
	}
	return false;
}

void BST::delte(int val)
{
	treeNode *parent, *loc, *pos;
	pos = parent = loc = root;
	while (pos)
	{
		parent = pos;
		if (val == pos->getData())
			break;
		else if (val < pos->getData())
			pos = pos->getLeft();
		else
			pos = pos->getRight();
	}
	if (pos)
	{
		if (pos->getLeft() && pos->getRight())
		{
			loc = pos->getLeft();
			while (loc->getRight())
			{
				parent = loc;
				loc = loc->getRight();
			}
			pos->setData(loc->getData());
			pos = loc;
		}
		treeNode *temp = pos;
		if (pos == parent->getLeft())
			parent->setLeft(pos->getLeft() ? pos->getLeft() : pos->getRight());
		else
			parent->setRight(pos->getLeft() ? pos->getLeft() : pos->getRight());
	}
	else
		cout << val << " not found." << endl;
}

void BST::preOrder(treeNode* n)
{
	if (n)
	{
		cout << n->getData() << '\t';
		preOrder(n->getLeft());
		preOrder(n->getRight());
	}
}

void BST::inOrder(treeNode* n)
{
	if (n)
	{
		inOrder(n->getLeft());
		cout << n->getData() << '\t';
		inOrder(n->getRight());
	}
}

void BST::postOrder(treeNode* n)
{
	if (n)
	{
		postOrder(n->getLeft());
		postOrder(n->getRight());
		cout << n->getData() << '\t';
	}
}

treeNode* BST::getRoot()
{
	return root;
}


//ASSIGNMENT
void BST::levelOrderTraversal(treeNode *node)
{
	Queue q;
	do
	{
		cout << node->getData() << '\t';
		if (node->getLeft())
			q.enQueue(node->getLeft());
		if (node->getRight())
			q.enQueue(node->getRight());
		node = q.deQueue();
	} while (!q.isEmpty());
	cout << node->getData() << '\t';
	cout << endl;
}