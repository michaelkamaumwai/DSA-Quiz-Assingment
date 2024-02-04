#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int arr[], int a)
{
    if (a==0 || a==1)
        return a;

    int b = 0;

    for (int i=0; i < a-1; i++)
        if (arr[i] != arr[i+1])
            arr[b++] = arr[i];
    arr[b++] = arr[a-1];
    return b;
}

int main()
{
    int arr[] = {1, 6, 6, 11, 11, 15, 17, 17, 23, 23};
    int a = sizeof(arr) / sizeof(arr[0]);

    a = removeDuplicates(arr, a);

    for (int i=0; i<a; i++)
        printf("%d ", arr[i]);
    return 0;
}

