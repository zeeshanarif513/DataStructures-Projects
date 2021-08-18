


#include "bst.h"

int main()
{
	int choice;
	int val,n;
	BST b;
	cout << "Enter the number of values you want to insert: ";
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cout << "Enter " << i + 1 << " value: ";
		cin >> val;
		b.insert(val);
	}
	b.delte(90);

	cout << "Enter your choice." << endl;
	cout << "1 for PreOrderTraversal" << endl;
	cout << "2 for InOrderTraversal" << endl;
	cout << "3 for PostOrderTraversal" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		b.preOrderIterative(b.getRoot());
		break;
	case 2:
		b.inOrderIterative(b.getRoot());
		break;
	case 3:
		b.postOrderIterative(b.getRoot());
		break;
	default:
		cout << "You Entered wrong choice" << endl;
	}
	 

	system("pause");
	return 0;
}
