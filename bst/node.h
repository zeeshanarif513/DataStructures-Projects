#ifndef NODE_H
#define NODE_H

#include "treenode.h"


class Node {
private:
	treeNode *address;
	Node *next;
public:
	Node();
	void setAddres(treeNode*);
	void setNext(Node*);
	treeNode* getAddres() const;
	Node* getNext() const;

};


#endif