#include <stdio.h>
#include <Windows.h>

//출력 텍스트 색깔 바꾸기
void textcolor(int colorNum) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
}