#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[50] , n, i, item, loc=0, beg, end, mid;

    printf("Enter the no. of elements:\n");
    scanf("%d", &n);

    printf("Enter elements(in sorted order): \n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are: \n");
    for(i=0 ; i<n ; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("Enter the element to be searched: \n");
    scanf("%d", &item);

    beg=0;
    end=n-1;

    while(beg <= end)
    {
        mid = (beg+end) / 2;

        if(item == arr[mid])
        {
            printf("%d is present\n", item);
            loc = mid + 1;
            printf("location = %d\n", loc);
            break;
        }

        // If item < arr[mid], we'll only search the left sub-array.
        else if(item < arr[mid])
            end = mid-1;

        // If item > arr[mid], we'll only search the right sub-array.
        else
            beg = mid +1;
    }


    if(loc == 0)
        printf("Element is not present.\n");

    return 0;
}
