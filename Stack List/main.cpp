
#include"stack.h"

int main()
{
	Stack s;
	int choice,val;
	do {
		cout << "Enter your choice: " << endl;
		cout << "Press 1 to push element." << endl;
		cout << "Press 2 to pop element." << endl;
		cout << "Press 3 to show top." << endl;
		cout << "Press 4 to exit: " << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter value you want to push: ";
			cin >> val;
			s.push(val);
			break;
		case 2:
			val = s.pop();
			cout << "Returning value is " << val << endl;
			break;
		case 3:
			cout << "Top = " << s.showTop() << endl;
			break;
		case 4:
			break;

		}
	} while (choice != 4);
	system("pause");
	return 0;
}
