#include <stdio.h>
#define UP 0 //72
#define DOWN 1 //80
#define LEFT 2 //75
#define RIGHT 3 //77
#define SUBMIT 4
#define CANCEL 5

int key_control() {
    char input;
    while (1) {
        if (_kbhit()) {
            input = _getch();
            if (input == -32) {
                input = _getch();
                 if (input == 72) {     //↑ 키 누르면 0 반환
                    return UP;
                }
                else if (input == 80) {     //↓ 키 누르면 1 반환
                    return DOWN;
                }
                else if (input == 75) {     //← 누르면 2 반환
                    return LEFT;
                }
                else if (input == 77) {     //→ 키 누르면 3 반환
                    return RIGHT;
                }
            }
            else if (input == 'Z' || input == 'z') {    //z or Z 키 누르면 4 반환
                return SUBMIT;
            }
            else if (input == 'X' || input == 'x') {    //x or X 키 누르면 5 반환
                return CANCEL;
            }
        }
    }
}