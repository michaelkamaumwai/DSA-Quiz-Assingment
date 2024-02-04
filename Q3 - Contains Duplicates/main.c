#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool checkDuplicatesWithinK(int arr[], int n, int k)
{

	for (int i = 0; i < n; i++) {
		int j = i + 1;
		int range = k;

		while (range > 0 && j < n) {
			if (arr[i] == arr[j])
				return true;
			j++;
			range--;
		}
	}
	return false;
}


int main()
{
	int arr[] = { 0, 9, 2, 4, 2, 7, 6, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	if (checkDuplicatesWithinK(arr, n, 3))
		printf("True");
	else
		printf("False");
}

