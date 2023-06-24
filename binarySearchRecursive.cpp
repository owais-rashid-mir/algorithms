#include <iostream>
using namespace std;

int BinarySearchRecursive(int arr[], int item, int beg, int end)
{
    int mid;

    if (beg > end)
    {
        cout << "Item is not found";
        return 0;
    }

    else
    {
        mid = (beg + end) / 2;
        if (arr[mid] == item)
        {
            cout << "Item is found at " << mid << " index \n";
            return 0;
        }

        else if (item > arr[mid])
        {
            // If item > arr[mid], we'll only search the right sub-array.
            BinarySearchRecursive(arr, item, mid + 1, end);
        }

        else if (item < arr[mid])
        {
            // If item < arr[mid], we'll only search the left sub-array.
            BinarySearchRecursive(arr, item, beg, mid - 1);
        }
    }
}

int main()
{
    int arr[50], item, i, n, beg, end;

    cout << "Enter the size of an array: \n";
    cin >> n;

    cout << "Enter elements(in sorted order): \n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter an item to be searched: \n";
    cin >> item;

    beg = 0;
    end = n - 1;

    BinarySearchRecursive(arr, item, beg, end);

    return 0;
}
