
#include<iostream>
using namespace std;

const int SIZE = 100;

int main()
{
	int arr[SIZE];
	int i, j, size, temp;
	cout << "Enter size of array(between 0 and 99: ";
	cin >> size;
	while (size < 0 || size >= SIZE)
	{
		cout << "Wrong input.Please enter between 0 and 99: ";
		cin >> size;
	}
	cout << "Enter elements in array: " << endl;
	for (i = 0;i < size;i++)
		cin >> arr[i];

	cout << "Array before sorting: " << endl;
	for (i = 0;i < size;i++)
		cout << arr[i] << " ";
	cout << endl;

	for (i = 1;i < size;i++)
	{
		temp = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
	}

	cout << "Array After sorting: " << endl;
	for (i = 0;i < size;i++)
		cout << arr[i] << " ";
	cout << endl;

	system("pause");
	return 0;
}
