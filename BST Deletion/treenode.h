#ifndef _TREENODE_H_
#define _TREENODE_H_

#include<iostream>
using namespace std;

class treeNode {
private:
	int data;
	treeNode *left, *right;
public:
	treeNode();
	treeNode(int);
	void setData(int);
	int getData();
	void setLeft(treeNode*);
	treeNode* getLeft();
	void setRight(treeNode*);
	treeNode* getRight();

};


#endif // !_TREENODE_H_
