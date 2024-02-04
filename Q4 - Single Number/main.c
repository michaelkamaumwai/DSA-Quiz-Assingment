#include <stdio.h>
#include <stdlib.h>

int singleElement(int arr[], int arraySize)
{
    for (int i = 0; i < arraySize; i++) {
        int count = 0;
        for (int j = 0; j < arraySize; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int array[] = {0, 5, 5, 8, 7, 12, 9, 8, 12, 9, 0 };
    int a = sizeof(array) / sizeof(array[0]);

    printf(" The Number Element occurring once is %d\n", singleElement(array, a));
    return 0;
}


