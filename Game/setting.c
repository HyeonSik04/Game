#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void setting() {
	//â �̸�
	SetConsoleTitle(TEXT("����"));
	//â ũ��
	system("mode con:cols=90 lines=30");

	//�����̴� Ŀ�� ���ֱ�
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.bVisible = 0;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);

	//�巡�� �ȵǰ� �ϱ�
	/*
	DWORD prevMode;
	GetConsoleMode(GetStdHandle(STD_INPUT_HANDLE), &prevMode);
	SetConsoleMode(GetStdHandle(STD_INPUT_HANDLE), prevMode & ~ENABLE_QUICK_EDIT_MODE);
	*/
}