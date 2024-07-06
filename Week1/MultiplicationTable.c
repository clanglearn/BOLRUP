#include <stdio.h>

int main(void) {
	int i = 1;
	while (i < 4) {
		int j = 1;
		while (j < 10) {
			printf("%d * %d = %d\n", i, j, i * j);
			j++;
		}
		i++;
	}
	do {
		int j = 1;
		do {
			printf("%d * %d = %d\n", i, j, i * j);
			j++;
		} while (j < 10);
		i++;
	} while (i < 7);
	for (int i = 7; i < 10; i++){
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
}