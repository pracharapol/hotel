#include<stdio.h>
void sum() {
	int x, a, y = 690, z = 1050, total, b;
	printf("Please choose a rooms(room1-room10) : ");
	scanf_s("%d", &x);
	printf("Number of rooms (Max 5): ");
	scanf_s("%d", &a);
	printf("Number of days to stay : ");
	scanf_s("%d", &b);
	if (x > 0 && x <= 5) {
		if (a < 0 || a>5) {
			printf("Error ");
		}
		else {
			total = y * a * b;
			printf("Price = %d", total);
		}
	}
	else if (x > 5 && x <= 10) {
		if (a < 0 || a>5) {
			printf("Error ");
		}
		else {
			total = y * a * b;
			printf("Price = %d", total);
		}
	}
}
void sum1() {
	int x;
	printf("Please choose a rooms(room1-room10) : ");
	scanf_s("%d", &x);
	if (x > 0 && x <= 5) {
		printf("Room area 32 square meters\n");
		int y = 32;
		for (int i = 1; i <= y; i++) {
			printf("*");
		}
		printf("\n");
		for (int j = 3; j <= y; j++) {
			for (int a = y; a <= y; a++) {
				printf("*");
			}
			for (int b = 3; b <= y; b++) {
				printf(" ");
			}
			for (int c = y; c <= y; c++) {
				printf("*");
			}
			printf("\n");
		}
		for (int i = 1; i <= y; i++) {
			printf("*");
		}
	}
	if (x > 5 && x <= 10) {
		printf("Room area 40 square meters\n");
		int y = 40;
		for (int i = 1; i <= y; i++) {
			printf("*");
		}
		printf("\n");
		for (int j = 3; j <= y; j++) {
			for (int a = y; a <= y; a++) {
				printf("*");
			}
			for (int b = 3; b <= y; b++) {
				printf(" ");
			}
			for (int c = y; c <= y; c++) {
				printf("*");
			}
			printf("\n");
		}
		for (int i = 1; i <= y; i++) {
			printf("*");
		}
	}
}
int main() {
	sum();
	printf("\n");
	sum1();
	return 0;
}