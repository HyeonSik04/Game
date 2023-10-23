#include <stdio.h>
#include "gotoxy.h"

void print_title() {
	int x = 20;
	int y = 9;
	gotoxy(x, y);
	printf(" ,adPPYb,d8 ,adPPYYba, 88,dPba,,adPba,   ,adPPYba,\n");
	gotoxy(x, ++y);
	printf("a8\"    \`Y88 \"\"     \`Y8 88P\'  \"88\"   \"8a a8P_____88\n");
	gotoxy(x, ++y);
	printf("8b       88 ,adPPPPP88 88     88     88 8PP\"\"\"\"\"\"\"\n");
	gotoxy(x, ++y);
	printf("\"8a,   ,d88 88,    ,88 88     88     88 \"8b,   ,aa\n");
	gotoxy(x, ++y);
	printf(" \`\"YbbdP\"Y8 \`\"8bbdP\"Y8 88     88     88  \`\"Ybbd8\"\'\n");
	gotoxy(x, ++y);
	printf(" aa,    ,88\n");
	gotoxy(x, ++y);
	printf("  \"Y8bbdP\"\n");
}

/*
* 12행
* 52열
* 
 ,adPPYb,d8 ,adPPYYba, 88,dPYba,,adPYba,   ,adPPYba,
a8"    `Y88 ""     `Y8 88P'   "88"    "8a a8P_____88
8b       88 ,adPPPPP88 88      88      88 8PP"""""""
"8a,   ,d88 88,    ,88 88      88      88 "8b,   ,aa
 `"YbbdP"Y8 `"8bbdP"Y8 88      88      88  `"Ybbd8"'
 aa,    ,88
  "Y8bbdP"


						게임시작

						게임종료
*/