#include"Queue.h"

int main()
{
	Queue q;
	q.enQueue(5);
	q.enQueue(4);
	q.enQueue(3);
	q.enQueue(2);
	q.enQueue(1);
	int choice,val;
	do
	{
		cout<<"Enter your choice: "<<endl;
		cout << " Press 1 to enter value in queue." << endl;
		cout << " Press 2 to delete value in queue." << endl;
		cout << " Press 3 to exit: " << endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter value: ";
				cin>>val;
				q.enQueue(val);
				break;
			case 2:
				val= q.deQueue();
				cout<<"Deleted value is "<<val<<endl;
				break;
			case 3:
				break;
			default:
				cout<<"You entered wrong choice."<<endl;
		}
		
	}while(choice!=3);
	cout<<endl<<endl;
	cout<<"Deleteing value from queue."<<endl;
	cout<<"Before deleteion: "<<endl;
	cout << "Rear = " << q.showRear() << endl;
	cout << "Front = " << q.showFront() << endl;
	val=q.deQueue();
	cout << "Returning value is " << val << endl;
	cout << "Now " << endl;
	cout<<"Before deleteion: "<<endl;
	cout << "Rear = " << q.showRear() << endl;
	cout << "Front = " << q.showFront() << endl;
	system("pause");
	return 0;
}
