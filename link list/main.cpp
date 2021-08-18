
#include"list.h"

int main()
{
	List l;
	l.add(5);
	l.add(10);
	l.add(8);
	l.add(7);
	l.start();
	
	while (l.next())
		cout << l.getValue() << endl;

	system("pause");
	return 0;
}
