

#include"deque.h"

int main()
{
	Deque d;
	int choice,val;
	do {
		cout << "Enter your choice." << endl;
		cout << "1. for adding from front." << endl;
		cout << "2. for adding from rear." << endl;
		cout << "3. for deleting from front." << endl;
		cout << "4. for deleting from rear." << endl;
		cout << "5. for dispalying rear and front." << endl;
		cout << "6. for exit." << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter value: ";
			cin >> val;
			d.En_Front(val);
			break;
		case 2:
			cout << "Enter value: ";
			cin >> val;
			d.En_Rear(val);
			break;
		case 3:
			d.Del_Front();
			break;
		case 4:
			d.Del_Rear();
			break;
		case 5:
			cout << "Rear = " << d.showRear() << endl;
			cout << "Front = " << d.showFront() << endl;
			break;
		case 6:
			break;
		default:
			cout << "You entered wrong choice." << endl;
		}
	} while (choice != 6);

	system("pause");
	return 0;
}
