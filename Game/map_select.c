#include <stdio.h>
#include "gotoxy.h"
#include "textcolor.h"
#include "key_control.h"

#define UP 0 //72
#define DOWN 1 //80
#define LEFT 2 //75
#define RIGHT 3 //77
#define SUBMIT 4

int map_select() {
	int x = 26;
	int y = 10;
	gotoxy(x, y);
	textcolor(2);
	printf("●");
	while (1) {
		int key = key_control();
		//숲
		if (x == 26 && y == 10) {
			//숲 -> 바다
			if (key == UP || key == RIGHT) {
				gotoxy(x, y);
				textcolor(7);
				printf("○");
				x = 45;
				y = 7;
				gotoxy(x, y);
				textcolor(2);
				printf("●");
			}
			//숲 -> 사막
			else if (key == DOWN) {
				textcolor(7);
				gotoxy(x, y);
				printf("○");
				x = 28;
				y = 18;
				gotoxy(x, y);
				textcolor(2);
				printf("●");
			}
			//숲 선택
			else if (key == SUBMIT) {
				return 1;
			}
		}
		//사막
		else if (x == 28 && y == 18) {
			//사막 -> 동굴
			if (key == RIGHT) {
				gotoxy(x, y);
				textcolor(7);
				printf("○");
				x = 41;
				y = 14;
				gotoxy(x, y);
				textcolor(2);
				printf("●");
			}
			//사막 -> 숲
			else if (key == UP) {
				textcolor(7);
				gotoxy(x, y);
				printf("○");
				x = 26;
				y = 10;
				gotoxy(x, y);
				textcolor(2);
				printf("●");
			}
			//사막 선택
			else if (key == SUBMIT) {
				return 2;
			}
		}
		//동굴
		else if (x == 41 && y == 14) {
			//동굴 -> 바다
			if (key == UP) {
				gotoxy(x, y);
				textcolor(7);
				printf("○");
				x = 45;
				y = 7;
				gotoxy(x, y);
				textcolor(2);
				printf("●");
			}
			//동굴 -> 사막
			else if (key == LEFT) {
				textcolor(7);
				gotoxy(x, y);
				printf("○");
				x = 28;
				y = 18;
				gotoxy(x, y);
				textcolor(2);
				printf("●");
			}
			//동굴 선택
			else if (key == SUBMIT) {
				return 3;
			}
		}
		//바다
		else if (x == 45 && y == 7) {
			//바다 -> 동굴
			if (key == DOWN) {
				gotoxy(x, y);
				textcolor(7);
				printf("○");
				x = 41;
				y = 14;
				gotoxy(x, y);
				textcolor(2);
				printf("●");
			}
			//바다 -> 숲
			else if (key == LEFT) {
				textcolor(7);
				gotoxy(x, y);
				printf("○");
				x = 26;
				y = 10;
				gotoxy(x, y);
				textcolor(2);
				printf("●");
			}
			//바다 선택
			else if (key == SUBMIT) {
				return 4;
			}
		}
	}
}