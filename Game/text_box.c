#include <stdio.h>
#include "gotoxy.h"

void text_box() {
	int x = 1;
	int y = 19;
	gotoxy(x, y);
	for (int i = 1; i <= 44; i++) {
		printf("■");
	}
	
	printf("\n");

	for (int i = 1; i <= 8; i++) {
		gotoxy(x, ++y);
		printf("■");
		for (int j = 1; j <= 84; j++) {
			printf(" ");
		}

		printf("■");
		printf("\n");
	}

	gotoxy(x, ++y);

	for (int i = 1; i <= 44; i++) {
		printf("■");
	}

	printf("\n");
}