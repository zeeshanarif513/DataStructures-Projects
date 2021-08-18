

#include<iostream>
using namespace std;

void QuickSort(int arr[],int size, int pivot, int left, int right)
{
	int temp, r = right;
	//if (left < right)
	//{
		while (left <= right)
		{
			while (arr[right] >= arr[pivot] && right!=pivot)
			{
				right--;
			}
			while (arr[left] <= arr[pivot] && left < right)
			{
				left++;
			}
			if (left < right) {
				temp = arr[left];
				arr[left] = arr[right];
				arr[right] = temp;
			}
			else {
				temp = arr[pivot];
				arr[pivot] = arr[right];
				arr[right] = temp;
				QuickSort(arr, size, pivot, pivot + 1, right - 1);
				QuickSort(arr, size, right + 1, right + 2, r);

			}
		}

	//}
}

int main()
{
	int size;
	cout << "Enter size of array: ";
	cin >> size;
	int *arr = new int[size];
	cout << "Enter elements in array." << endl;
	for (int i = 0;i < size;i++)
	{
		cout << "Enter element " << i + 1 << " :";
		cin >> arr[i];
	}
	cout << "Displaying before Sorting: ";
	for (int i = 0;i < size;i++)
		cout << arr[i] << " ";
	cout << endl;
	QuickSort(arr, size, 0, 1, size - 1);
	cout << "Displaying after Sorting: ";
	for (int i = 0;i < size;i++)
		cout << arr[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
