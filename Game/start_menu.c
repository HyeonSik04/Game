#include <stdio.h>
#include "key_control.h"
#include "gotoxy.h"
#include "textcolor.h"

#define UP 0 //72
#define DOWN 1 //80
#define LEFT 2 //75
#define RIGHT 3 //77
#define SUBMIT 4

int start_menu() {
	int x = 42;
	int y = 19;
	gotoxy(x - 2, y);
	printf("> 게임시작");
	gotoxy(x, y + 2);
	printf("게임종료");
	while (1) {
		int key = key_control();
		if (y == 19) {
			if (key == DOWN) {
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, ++y);
				gotoxy(x - 2, ++y);
				printf(">");
			}
			else if (key == SUBMIT) {
				return 1;
			}
		}
		else if (y == 21) {
			if (key == UP) {
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, --y);
				gotoxy(x - 2, --y);
				printf(">");
			}
			else if (key == SUBMIT) {
				return 0;
			}
		}
	}
}