#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h> 
#include "screen.h"
#include "key_control.h"
#include "setting.h"

#define UP 0 //72
#define DOWN 1 //80
#define LEFT 2 //75
#define RIGHT 3 //77
#define SUBMIT 4
#define CANCEL 5

int main() {
	int level = 1;

	setting();

	print_outline();
	print_title();

	if (start_menu()) {		//게임 시작 선택시 1, 게임 종료 선택시 0 반환
		print_outline();
	}
	else {
		system("cls");
		return 0;
		//게임 종료
	}

	print_map();
	while (1) {
		if (map_select(level) == 0) {
			printf("이전 스테이지를 클리어해야 합니다.");
		}
		else if (map_select(level) == 1) {
			printf("숲 스테이지 시작");
		}
		else if (map_select(level) == 2) {
			printf("사막 스테이지 시작");
		}
		else if (map_select(level) == 3) {
			printf("동굴 스테이지 시작");
		}
		else if (map_select(level) == 4) {
			printf("바다 스테이지 시작");
		}
	}
}