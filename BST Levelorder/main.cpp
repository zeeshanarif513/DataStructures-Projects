
#include "bst.h"

int main()
{
	int val, n;
	BST b;
	cout << "Enter the number of values you want to insert: ";
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cout << "Enter " << i + 1 << " value: ";
		cin >> val;
		b.insert(val);
	}
	cout << "Displaying using Breath(LevelOrder) Traversal." << endl;
	b.levelOrderTraversal(b.getRoot());
	system("pause");
	return 0;
}
