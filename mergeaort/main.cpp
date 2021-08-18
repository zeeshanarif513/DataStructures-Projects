

#include<iostream>
using namespace std;

void merge(int arr[], int left, int middle, int right)
{
	int i, j, k;
	int n = middle - left + 1;
	int m = right - middle;

	int *A, *B;
	A = new int[n];
	B = new int[m];
	for (i = 0; i < n; i++)
		A[i] = arr[left + i];
	for (j = 0; j < m; j++)
		B[j] = arr[middle + 1 + j];
	i = 0;
	j = 0; 
	k = left; 
	while (i < n && j < m)
	{
		if (A[i] <= B[j])
		{
			arr[k] = A[i];
			i++;
		}
		else
		{
			arr[k] = B[j];
			j++;
		}
		k++;
	}
	while (i < n)
	{
		arr[k] = A[i];
		i++;
		k++;
	}
	while (j < m)
	{
		arr[k] = B[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int left, int right)
{
	if (left < right)
	{
		int middle = (left + right) / 2; 
		mergeSort(arr, left, middle);
		mergeSort(arr, middle + 1, right);

		merge(arr, left, middle, right);
	}
}
int main()
{
	int size;
	cout << "Enter size of array: ";
	cin >> size;
	int *arr = new int[size];
	cout << "Enter elements in array: " << endl;
	for (int i = 0;i < size;i++)
	{
		cout << "Enter element " << i + 1 << " :";
		cin >> arr[i];
	}

	cout << "Dislpaying array before sorting: ";
	for (int i = 0;i < size;i++)
		cout << arr[i] << " ";
	cout << endl;
		
	
	mergeSort(arr, 0, size - 1);

	cout << "Dislpaying array before sorting: ";
	for (int i = 0;i < size;i++)
		cout << arr[i] << " ";
	cout << endl;

	system("pause");
	return 0;
}
