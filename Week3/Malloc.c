#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	scanf("%d", &num);
	int* arr = (int*)malloc(sizeof(int) * num);
	for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
		// scanf("%d", arr + i);
	}
	for (int i = 0; i < num; i++) {
		printf("%d ", arr[i]);
        // printf("%d ", *(arr + i));
	}
	return 0;
}