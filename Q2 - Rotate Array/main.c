#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[] = { 0, 6, 13, 37, 59, 71, 85 };
	int a = sizeof(arr) / sizeof(arr[0]);
	int b = 4;
	b = b % a;
	int i, e;

	for (i = a - b, e = a - 1; i < e; i++, e--) {
		int temp = arr[i];
		arr[i] = arr[e];
		arr[e] = temp;
	}

	for (i = 0, e = a - b - 1; i < e; i++, e--) {
		int temp = arr[i];
		arr[i] = arr[e];
		arr[e] = temp;
	}

	for (i = 0, e = a - 1; i < e; i++, e--) {
		int temp = arr[i];
		arr[i] = arr[e];
		arr[e] = temp;
	}

	for (int i = 0; i < a; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
