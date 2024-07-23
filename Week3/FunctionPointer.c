#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef int (*Cmp)(int, int);
int add(int num1, int num2) { return num1 + num2; }
int sub(int num1, int num2) { return (num1 > num2) ? num1 - num2 : num2 - num1; }
int mul(int num1, int num2) { return num1 * num2; }
int dvd(int num1, int num2) { return (num1 > num2) ? num1 / num2 : num2 / num1; }

void print(int num1, int num2, Cmp mod) {
	printf("%d\n", mod(num1, num2));
	return;
}

int main(void) {
	int (*fadd)(int, int) = add;
	int (*fsub)(int, int) = sub;
	int (*fmul)(int, int) = mul;
	int (*fdvd)(int, int) = dvd;
	Cmp mods[4] = { fadd, fsub, fmul, fdvd };
	int t = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int mod, num1, num2;
		scanf("%d %d %d", &mod, &num1, &num2);
		print(num1, num2, mods[mod]);
	}
	return 0;
}