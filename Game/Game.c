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

int main() {
	setting();

	print_outline();
	print_title();

	if (start_menu()) {
		print_outline();
	}
	else {
		system("cls");
		return 0;
	}

	print_map();
	map_select();

	int asdf;
	scanf("\n%d", &asdf);

	printf("%d", asdf);

	//æ»≥Á«œººø‰
}