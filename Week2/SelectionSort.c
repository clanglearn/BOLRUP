#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void SelectionSort(int array[], int len);

int main(void) {
	int array[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &array[i]);
	}
	SelectionSort(array, 10);
	for (int i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
	return 0;
}

void SelectionSort(int array[], int len) {
	for (int i = 0; i < len; i++) {
		int min_index = i;
		for (int j = i; j < len; j++) {
			if (array[j] < array[min_index])
				min_index = j;
		}
		int temp = array[i];
		array[i] = array[min_index];
		array[min_index] = temp;
	}
}