#ifndef _BST_H_
#define _BST_H_

#include "treenode.h"
#include "queue.h"

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
	void levelOrderTraversal(treeNode *node);
};

#endif // !_BST_H_
