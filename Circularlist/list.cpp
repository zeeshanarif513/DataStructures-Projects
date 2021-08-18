#include"list.h"


List::List()
{
	head = preCurr = curr = NULL;
	size = 0;
}

void List::add(int val)
{
	Node* newNode = new Node;
	newNode->setData(val);
	if (size == 0)
	{
		head = newNode;
		head->setNext(head);
		preCurr = curr = head;
	}
	else
	{
		
		newNode->setNext(curr->getNext());
		curr->setNext(newNode);
		preCurr = curr;
		curr = curr->getNext();
	}
	size++;
}

void List::insert(int val)
{
	if (size != 0)
	{
		int n, count,choice;
		cout << "Enter the element after which you want to insert " << val << ": ";
		cin >> n;
		count = search(n);
		if (count == 0)
			cout << "Number " << n << " is not found in the list." << endl;
		else {
			if (count > 1) {
				cout << n << " appears " << count << " times. After which you want to insert." << endl;
				do {
					cout << "Please enter between 1 and " << count << ": ";
					cin >> choice;
				} while (choice <= 0 || choice > count);
				count = choice; //for later/easy/general use
			}
				start();
				if (n == curr->getData())
					count--;
				while (count)
				{
					preCurr = curr;
					curr = curr->getNext();
					if (n == curr->getData())
						count--;
				};
				add(val);
			}
		
		}
	else
		add(val);
	
}
void List::start()
{
	preCurr = curr = head;
}

int List::search(int val)
{
	if (size != 0)
	{
		int count = 0;
		start();
		cout << head->getData();
		do {
			if (val == curr->getData())
				count++;
			next();
			cout << (curr->getNext())->getData();
		} while (curr != head);
		return count;
	}
	return -1;
}

void List::delte(int val)
{
	int choice, count = search(val);
	if (count == 0)
		cout << "Number " << val << " is not found in the list." << endl;
	else if (count == -1) {
		cout << "List is empty." << endl;
	}
	else {
		if (count != 1) {
			cout << val << " appears " << count << " times. After which you want to delete." << endl;
			do {
				cout << "Please enter between 1 and " << count << ": ";
				cin >> choice;
			} while (choice <= 0 || choice > count);
			count = choice;  //for later/easy/general use
		}
		start();
		if (val == curr->getData())
			count--;
		while (count)
		{
			preCurr = curr;
			curr = curr->getNext();
			if (val == curr->getData())
				count--;
		} 
		preCurr->setNext(curr->getNext());
		if (curr == head) {
			head = head->getNext();
		//	preCurr->setNext(head);
		}
		delete curr;
		curr = preCurr->getNext();
		size--;
	}

}

int List::length() const
{
	return size;
}

void List::next()
{
	preCurr = curr;
	curr = curr->getNext();
}

int List::getValue() const
{
	return curr->getData();
}

void List::display() {
	start();
	if (size != 0) {
		cout << "Displaying list: " << '\t';
		do {
			cout << curr->getData() << '\t';
			next();
		} while (curr != head);
		cout << endl;
	}
}