#ifndef _BST_H_
#define _BST_H_

#include "treenode.h"
#include "stack.h"

class BST {
private:
	treeNode *root;
public:
	BST();
	void insert(int);
	bool search(int);
	void delte(int);
	void preOrder(treeNode*);
	void inOrder(treeNode*);
	void postOrder(treeNode*);
	treeNode* getRoot();
	void preOrderIterative(treeNode*);
	void inOrderIterative(treeNode*);
	void postOrderIterative(treeNode*);
};

#endif // !_BST_H_
