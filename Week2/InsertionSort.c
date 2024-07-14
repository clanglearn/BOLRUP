#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void InsertionSort(int array[], int len);

int main(void) {
	int array[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &array[i]);
	}
	InsertionSort(array, 10);
	for (int i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
	return 0;
}

void InsertionSort(int array[], int len) {
	for (int i = 1; i < len; i++) {
		for (int j = i-1; j >= 0; j--) {
			if (array[j] > array[j+1]) {
				int tmep = array[j];
				array[j] = array[j+1];
				array[j+1] = tmep;
			}
		}
	}
}