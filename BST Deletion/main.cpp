

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
	cout << "Displaying before deleteion: ";
	b.inOrder(b.getRoot());
	cout << endl;


	cout << "Enter the value you want to delete: ";
	cin >> val;
	b.delte(val);

	cout << "Displaying after deleteion: ";
	b.inOrder(b.getRoot());
	cout << endl;
	

	system("pause");
	return 0;
}
