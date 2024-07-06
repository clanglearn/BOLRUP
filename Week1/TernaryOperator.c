#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    char message;
    message = (n > 90) ? 'A' : (n > 80) ? 'B' : 'F';
    printf("%c", message);
    return 0;
}