

#include "list.h"

ostream& operator<<(ostream& out, List& l)
{
	if (l.isEmpty())
	{
		out << "List is Empty\nProgram crash.";
		system("pause");
		exit(0);
	}
	else
	{
		l.start();
		for (int i = 0;i<l.size;i++)
		{
			out << l.getValue() << '\t';
			l.next();
		}
		return out;
	}
}

void SelectionSort(List& l)
{
	int val;
	Node *temp, *min;
	temp = min = NULL;
	l.start();
	while (l.curr)
	{
		min = l.curr;
		temp = l.curr->getNext();
		while (temp)
		{
			if (temp->getData() < min->getData())
				min = temp;
			temp = temp->getNext();
		}
		val = l.curr->getData();
		l.curr->setData(min->getData());
		min->setData(val);
		l.next();
	}
}

void InsertionSort(List& l)
{
	int val;
	Node *temp = NULL;
	l.start();
	l.next();
	while (l.curr)
	{
		temp = l.curr->getPrev();
		val = l.getValue();
		while (/*temp != NULL&&*/temp->getData() > val)
		{
			temp->getNext()->setData(temp->getData());
			if(temp->getPrev()==NULL)
				temp->setData(val);
			temp = temp->getPrev();
			if (temp == NULL)
				break;
		}
		if (temp)
			temp->getNext()->setData(val);
		l.next();
	}
}

void BubbleSort(List& l)
{
	int val;
	for (int i = 0;i < l.size - 1;i++)
	{
		l.start();
		for (int j = 0;j < l.size - i - 1;j++)
		{
			if (l.curr->getData() > l.curr->getNext()->getData())
			{
				val = l.curr->getNext()->getData();
				l.curr->getNext()->setData(l.curr->getData());
				l.curr->setData(val);
			}
			l.next();
		}
	}
}

int main()
{
	char choice;
	List L;
	int num, val;
	cout << "Enter the number of values you want to insert in list: ";
	cin >> num;
	for (int i = 0;i < num;i++)
	{
		cout << "Enter value " << i + 1 << ": ";
		cin >> val;
		L.add(val);
	}

	cout << endl << endl;
	cout << "Displaying List before Sorting." << endl;
	cout << L << endl;

	do
	{
		cout << endl << endl;
		cout << "Which Sorting Algoritm you want to apply\nEnter your choice." << endl;
		cout << "Press S/s for Selection Sort." << endl;
		cout << "Press B/b for Binary Sort." << endl;
		cout << "Press I/i for Insertion Sort." << endl;
		cin >> choice;
		switch (choice)
		{
		case 'S':
		case 's':
			SelectionSort(L);
			break;
		case 'B':
		case 'b':
			BubbleSort(L);
			break;
		case 'I':
		case 'i':
			InsertionSort(L);
			break;
		default:
			cout << "You Entered wrong choice." << endl;
		}
	} while (choice != 'S'&&choice != 's'&&choice != 'B'&&choice != 'b'&&choice != 'I'&&choice != 'i');
	
	cout << endl << endl;
	cout << "Displaying List after Sorting." << endl;
	cout << L << endl;


	system("pause");
	return 0;
}
