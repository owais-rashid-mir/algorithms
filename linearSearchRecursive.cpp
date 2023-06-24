#include <iostream>
using namespace std;

int LinearSearchRecursive(int arr[], int item, int size)
{
	size = size - 1;

	if (size < 0)
		return -1;

	else if (arr[size] == item)
		return 1;
	else
		return LinearSearchRecursive(arr, item, size);
}


int main()
{
	int size;
	cout << "Enter The size of array: ";
	cin >> size;

	int arr[size], item;

	// Taking input from the user.
	for(int i=0; i<size; i++)
	{
		cout << "Enter " << i << " Element : ";
		cin >> arr[i];
	}

	// Displaying array elements
	for (int i = 0; i < size; i++)
	{
		cout << "arr[ " << i << " ]  =  ";
		cout << arr[i] << endl;
	}

	cout << "Enter an item to be searched: ";
	cin >> item;

	int result;
	result = LinearSearchRecursive(arr, item, size--);

	if (result == 1)
		cout << "Item is present in the array. ";

	else
		cout << "Item is not present in the array. ";

	return 0;
}