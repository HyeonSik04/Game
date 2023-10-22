#include <stdio.h>
#include <Windows.h>

//커서 x, y로 이동

void gotoxy(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
