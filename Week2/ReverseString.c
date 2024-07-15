#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void Swap(char* a, char* b);
int len(char text[]);
void ReverseString(char text[]);


int main(void) {
	char text[100];
	scanf("%s", text);
	ReverseString(text);
	printf("%s", text);
	return 0;
}

void Swap(char* a, char* b) {
	char temp = *a;
	*a = *b;
	*b = temp;
}

int len(char text[]) {
	int length = 0;
	while (text[length] != '\0') {
		length++;
	}
	return length;
}

void ReverseString(char text[]) {
	int length = len(text);
	for (int i = 0; i < length/2; i++) {
		Swap(&text[i], &text[length - i - 1]);
	}
}