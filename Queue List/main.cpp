

#include"queue.h"

int main()
{
	Queue q;
	int choice, val;
	do {
		cout << "Enter your choice: " << endl;
		cout << "Press 1 to enter element in queue." << endl;
		cout << "Press 2 to delete element from queue." << endl;
		cout << "Press 3 to show rear and front." << endl;
		cout << "Press 4 to exit: " << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter value: ";
			cin >> val;
			q.enQueue(val);
			break;
		case 2:
			cout << "Returning value is " << q.deQueue() << endl;
			break;
		case 3:
			cout << "Rear = " << q.showRear() << endl;
			cout << "Front = " << q.showFront() << endl;
			break;
		case 4:
			break;
		}
	} while (choice != 4);
	system("pause");
	return 0;
}
