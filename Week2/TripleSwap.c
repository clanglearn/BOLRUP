#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void TripleSwap(int* num1, int* num2, int* num3);

int main(void) {
	int num1 = 10, num2 = 20, num3 = 30;
	TripleSwap(&num1, &num2, &num3);
	printf("%d %d %d", num1, num2, num3);
	return 0;
}

void TripleSwap(int* num1, int* num2, int* num3) {
	int temp = *num1;
	*num1 = *num3;
	*num3 = *num2;
	*num2 = temp;
}