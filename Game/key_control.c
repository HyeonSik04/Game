#include <stdio.h>
#define UP 0 //72
#define DOWN 1 //80
#define LEFT 2 //75
#define RIGHT 3 //77
#define SUBMIT 4

int key_control() {
    char input;
    while (1) {
        if (_kbhit()) {
            input = _getch();
            if (input == -32) {
                input = _getch();
                 if (input == 72) {     //�� Ű ������ 0 ��ȯ
                    return UP;
                }
                else if (input == 80) {     //�� Ű ������ 1 ��ȯ
                    return DOWN;
                }
                else if (input == 75) {     //�� ������ 2 ��ȯ
                    return LEFT;
                }
                else if (input == 77) {     //�� Ű ������ 3 ��ȯ
                    return RIGHT;
                }
            }
            else if (input == 'Z' || input == 'z') {    //z or Z Ű ������ 4 ��ȯ
                return SUBMIT;
            }
        }
    }
}