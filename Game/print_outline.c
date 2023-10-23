#include <stdio.h>
#include <Windows.h>
#include "gotoxy.h"

//화면을 초기화 후 테두리 출력
void print_outline() {
	system("cls");

	for (int i = 1; i <= 90; i++) {
		printf("#");
	}

	printf("\n");

	for (int i = 1; i <= 28; i++) {
		printf("#");
		
		for (int j = 1; j <= 88; j++) {
			printf(" ");
		}
		printf("#");
		printf("\n");
	}

	for (int i = 1; i <= 90; i++) {
		printf("#");
	}

	gotoxy(1, 1);
}