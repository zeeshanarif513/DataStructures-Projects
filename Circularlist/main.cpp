

#include"list.h"

ostream& operator<<(ostream& out, List& l) //Overloading cout operator
{
	if (l.size != 0) {
		l.start();
		for (int i = 0;i < l.size;i++)
		{
			cout << l.getValue() << '\t';
			l.next();
		}

	}
	else
		out << "List is empty." << endl;
	return out;
}
int main()
{
	List l1;
	int val;
	char choice;
	do
	{
		cout << "Enter your choice: " << endl;
		cout << "Press I/i to insert element in the list." << endl;
		cout << "Press D/d to delete element in the list." << endl;
		cout << "Press S/s to search element in the list." << endl;
		cout << "Press P/p to print elements from the list." << endl;
		cout << "Press E/e to exit." << endl;
		cin >> choice;
		switch (choice)
		{
		case 'I':
		case 'i':
			cout << "Enter value you want to insert: ";
			cin >> val;
			l1.insert(val);
			break;
		case 'D':
		case 'd':
			cout << "Enter value you want to delete: ";
			cin >> val;
			l1.delte(val);
			break;
		case 'S':
		case 's':
			int res;
			cout << "Enter value you want to search: ";
			cin >> val;
			res = l1.search(val);
			if (res == -1)
				cout << "List is empty." << endl;
			else if (res == 0)
				cout << "Value " << val << " is not found." << endl;
			else
				cout << "Value " << val << " is found.\nIt appears " << res << " times." << endl;
			break;
		case 'P':
		case 'p':
			cout << l1 << endl;
			break;
		case 'E':
		case 'e':
			break;
		}
	} while (choice != 'E'&&choice != 'e');


	system("pause");
	return 0;
}
