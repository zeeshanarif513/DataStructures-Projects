

#include "list.h"

ostream& operator<<(ostream& out,List& l)
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
		for(int i=0;i<l.size;i++)
		{
			out << l.getValue() << '\t';
			l.next();
		} 
		return out;
	}
}

void alterDelete(List& L)
{
	L.start();
	while (L.size != 1)  //Untile only one node left
	{
		L.next();
		if (L.curr == L.head) {
			L.head = L.head->getNext();
		}
		L.delte();
	}
}

int main()
{
	List l;
	int num, val;
	cout << "Enter the number of values you want to insert in list: ";
	cin >> num;
	for (int i = 0;i < num;i++)
	{
		cout << "Enter value " << i + 1 << ": ";
		cin >> val;
		l.add(val);
	}

	cout << "Displaying List before Alternative Deletion." << endl;
	cout << l << endl;

	alterDelete(l);

	cout << "Displaying List after Alternative Deletion." << endl;
	cout << l << endl;

	system("pause");
	return 0;
}
