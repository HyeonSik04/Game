#include <stdio.h>
#include <Windows.h>

//�ؽ�Ʈ ���� �ٲٱ�
void textcolor(int colorNum) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
}