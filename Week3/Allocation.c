#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	scanf("%d", &num);
	int* arr = (int*)calloc(num, sizeof(int));
	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}
	int dist;
	scanf("%d", &dist);
	arr = (int*)realloc(arr, sizeof(int)*dist);
	for (int i = 0; i < dist; i++) {
		scanf("%d", &arr[num + i]);
	}
	for (int i = 0; i < num+dist; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}