#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main(void) {
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1, * ptr2 = &num2;
	*ptr1 += 10;
	*ptr2 -= 10;
	printf("%d %d %p %p\n", num1, num2, ptr1, ptr2);
	int* temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
	printf("%d %d %p %p\n", num1, num2, ptr1, ptr2);
	return 0;
}