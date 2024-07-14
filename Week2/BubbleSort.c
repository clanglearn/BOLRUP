#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void BubbleSort(int array[], int len);

int main(void) {
	int array[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &array[i]);
	}
	BubbleSort(array, 10);
	for (int i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
	return 0;
}

void BubbleSort(int array[], int len) {
	int repeat = 1; 
	int count = 1;
	while (repeat == 1) { // 정렬이 완료되면 바로 종료
		repeat = 0;
		for (int i = 0; i < len-count; i++) {
			if (array[i] > array[i + 1]) {
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				repeat = 1;
			}
		}
		count++;
	}
}