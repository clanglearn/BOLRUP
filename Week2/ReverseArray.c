#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void reverse_array(int array[], int len);

int main(void) {
	int array[6] = {1, 2, 3, 4, 5, 6};
	reverse_array(array, 6);
	for (int i = 0; i < 6; i++) {
		printf("%d ", array[i]);
	}
	return 0;
}

void reverse_array(int array[], int len) {
	for (int i = 0; i < len / 2; i++) {
		int temp = array[i];
		array[i] = array[len - i - 1];
		array[len - i - 1] = temp;
	}
}