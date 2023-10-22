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
	printf("¡Ü");
	while (1) {
		int key = key_control();
		//½£
		if (x == 26 && y == 10) {
			//½£ -> ¹Ù´Ù
			if (key == UP || key == RIGHT) {
				gotoxy(x, y);
				textcolor(7);
				printf("¡Û");
				x = 45;
				y = 7;
				gotoxy(x, y);
				textcolor(2);
				printf("¡Ü");
			}
			//½£ -> »ç¸·
			else if (key == DOWN) {
				textcolor(7);
				gotoxy(x, y);
				printf("¡Û");
				x = 28;
				y = 18;
				gotoxy(x, y);
				textcolor(2);
				printf("¡Ü");
			}
		}
		//»ç¸·
		else if (x == 28 && y == 18) {
			//»ç¸· -> µ¿±¼
			if (key == RIGHT) {
				gotoxy(x, y);
				textcolor(7);
				printf("¡Û");
				x = 41;
				y = 14;
				gotoxy(x, y);
				textcolor(2);
				printf("¡Ü");
			}
			//»ç¸· -> ½£
			else if (key == UP) {
				textcolor(7);
				gotoxy(x, y);
				printf("¡Û");
				x = 26;
				y = 10;
				gotoxy(x, y);
				textcolor(2);
				printf("¡Ü");
			}
		}
		//µ¿±¼
		else if (x == 41 && y == 14) {
			//µ¿±¼ -> ¹Ù´Ù
			if (key == UP) {
				gotoxy(x, y);
				textcolor(7);
				printf("¡Û");
				x = 45;
				y = 7;
				gotoxy(x, y);
				textcolor(2);
				printf("¡Ü");
			}
			//µ¿±¼ -> »ç¸·
			else if (key == LEFT) {
				textcolor(7);
				gotoxy(x, y);
				printf("¡Û");
				x = 28;
				y = 18;
				gotoxy(x, y);
				textcolor(2);
				printf("¡Ü");
			}
		}
		//¹Ù´Ù
		else if (x == 45 && y == 7) {
			//¹Ù´Ù -> µ¿±¼
			if (key == DOWN) {
				gotoxy(x, y);
				textcolor(7);
				printf("¡Û");
				x = 41;
				y = 14;
				gotoxy(x, y);
				textcolor(2);
				printf("¡Ü");
			}
			//¹Ù´Ù -> ½£
			else if (key == LEFT) {
				textcolor(7);
				gotoxy(x, y);
				printf("¡Û");
				x = 26;
				y = 10;
				gotoxy(x, y);
				textcolor(2);
				printf("¡Ü");
			}
		}
	}
}