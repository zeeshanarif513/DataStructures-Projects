#ifndef _BST_H_
#define _BST_H_

#include "treenode.h"

class BST {
private:
	treeNode *root;
public:
	BST();
	void insert(int);
	bool search(int);
	//ASSIGNMENT
	void delte(int);
	void preOrder(treeNode*);
	void inOrder(treeNode*);
	void postOrder(treeNode*);
	treeNode* getRoot();

};

#endif // !_BST_H_
