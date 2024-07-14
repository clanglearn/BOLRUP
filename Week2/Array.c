#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int max(int array[], int len);
int min(int array[], int len);

int main(void) {
	int array[5];
	for (int i = 0; i < 5; i++) {
		scanf("%d", &array[i]);
	}
	printf("%d\n", max(array, 5));
	printf("%d\n", min(array, 5));
	printf("%d\n", max(array, 5));
	return 0;
}

int max(int array[], int len) {
	int max_value = array[0];
	for (int i = 1; i < len; i++) {
		if (max_value < array[i])
			max_value = array[i];
	}
	return max_value;
}

int min(int array[], int len) {
	int min_value = array[0];
	for (int i = 1; i < len; i++) {
		if (min_value > array[i])
			min_value = array[i];
	}
	return min_value;
}