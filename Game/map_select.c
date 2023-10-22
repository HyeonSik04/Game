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
	printf("��");
	while (1) {
		int key = key_control();
		//��
		if (x == 26 && y == 10) {
			//�� -> �ٴ�
			if (key == UP || key == RIGHT) {
				gotoxy(x, y);
				textcolor(7);
				printf("��");
				x = 45;
				y = 7;
				gotoxy(x, y);
				textcolor(2);
				printf("��");
			}
			//�� -> �縷
			else if (key == DOWN) {
				textcolor(7);
				gotoxy(x, y);
				printf("��");
				x = 28;
				y = 18;
				gotoxy(x, y);
				textcolor(2);
				printf("��");
			}
		}
		//�縷
		else if (x == 28 && y == 18) {
			//�縷 -> ����
			if (key == RIGHT) {
				gotoxy(x, y);
				textcolor(7);
				printf("��");
				x = 41;
				y = 14;
				gotoxy(x, y);
				textcolor(2);
				printf("��");
			}
			//�縷 -> ��
			else if (key == UP) {
				textcolor(7);
				gotoxy(x, y);
				printf("��");
				x = 26;
				y = 10;
				gotoxy(x, y);
				textcolor(2);
				printf("��");
			}
		}
		//����
		else if (x == 41 && y == 14) {
			//���� -> �ٴ�
			if (key == UP) {
				gotoxy(x, y);
				textcolor(7);
				printf("��");
				x = 45;
				y = 7;
				gotoxy(x, y);
				textcolor(2);
				printf("��");
			}
			//���� -> �縷
			else if (key == LEFT) {
				textcolor(7);
				gotoxy(x, y);
				printf("��");
				x = 28;
				y = 18;
				gotoxy(x, y);
				textcolor(2);
				printf("��");
			}
		}
		//�ٴ�
		else if (x == 45 && y == 7) {
			//�ٴ� -> ����
			if (key == DOWN) {
				gotoxy(x, y);
				textcolor(7);
				printf("��");
				x = 41;
				y = 14;
				gotoxy(x, y);
				textcolor(2);
				printf("��");
			}
			//�ٴ� -> ��
			else if (key == LEFT) {
				textcolor(7);
				gotoxy(x, y);
				printf("��");
				x = 26;
				y = 10;
				gotoxy(x, y);
				textcolor(2);
				printf("��");
			}
		}
	}
}