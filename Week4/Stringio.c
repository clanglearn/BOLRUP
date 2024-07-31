#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* 이니셜 입력받기
*/

int main(void) {
	int gc_str[4];
	for (int i = 0; i < 3; i++) {
		gc_str[i] = getchar();
	}
	getchar(); // '\n'문자 제거
	int fgc_str[4];
	for (int i = 0; i < 3; i++) {
		fgc_str[i] = fgetc(stdin);
	}
	getchar(); // '\n'문자 제거
	char gs_str[4];
	gets(gs_str);
	char fgs_str[4];
	fgets(fgs_str, sizeof(fgs_str), stdin);
	printf("getchar : ");
	for (int i = 0; i < 3; i++) {
		printf("%c", gc_str[i]);
	}
	printf("\nfgetc : ");
	for (int i = 0; i < 3; i++) {
		printf("%c", fgc_str[i]);
	}
	printf("\ngets : %s", gs_str);
	printf("\nfgets : %s", fgs_str);
	return 0;
} 