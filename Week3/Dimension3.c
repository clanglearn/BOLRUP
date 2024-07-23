#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int apartment[3][3][3] = {
	{{3, 1, 5}, {4, 1, 8}, {1, 5, 3}},
	{{9, 0, 3}, {8, 1, 1}, {4, 3, 4}},
	{{7, 3, 4}, {6, 3, 9}, {2, 2, 2}},
	};

	int building, floor, room;
	scanf("%d %d %d", &building, &floor, &room);
    // A1
	printf("%d동 %d층 %d호에는 %d명이 살고 있습니다\n", building, floor, room, apartment[building][floor][room]);
	printf("==================================================\n");
    // A2
	for (int i = 0; i < 3; i++) { // 동
		int sum = 0;
		for (int j = 0; j < 3; j++) { // 층
			for (int k = 0; k < 3; k++) { // 호
				sum += apartment[i][j][k];
			}
		}
		printf("%d동에는 %d명이 살고 있습니다\n", i, sum);
	}
	printf("==================================================\n");
    // A3
	for (int i = 0; i < 3; i++) { // 층
		int sum = 0;
		for (int j = 0; j < 3; j++) { // 동
			for (int k = 0; k < 3; k++) { // 호
				sum += apartment[j][i][k];
			}
		}
		printf("%d층에는 %d명이 살고 있습니다\n", i, sum);
	}
	return 0;
}