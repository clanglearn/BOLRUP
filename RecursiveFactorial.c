#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int Factorial(int num) {
	if (num == 0) {
		return 1;
	}
	else if (num == 1) {
		return 1;
	}
	else {
		return Factorial(num - 1) * num;
	}
}

int main(void) {
	int n;
	scanf("%d", &n);
	printf("%d\n", Factorial(n));
	return 0;
}