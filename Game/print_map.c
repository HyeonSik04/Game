#include <stdio.h>
#include "gotoxy.h"

void print_map() {
	int x = 10;
	int y = 3;
	gotoxy(x, y);
	printf("                       ,-.^._                 _\n");
	gotoxy(x, ++y);
	printf("                     .'      `-.            ,' ;\n");
	gotoxy(x, ++y);
	printf("          /`-.  ,----'         `-.   _  ,-.,'  `\n");
	gotoxy(x, ++y);
	printf("       _.'   `--'                 `-' '-'      ;\n");
	gotoxy(x, ++y);
	printf("      :                            ��          ;  ____,-.\n");
	gotoxy(x, ++y);
	printf("      ,'                          �ٴ�          ;_,- ,.__'--.\n");
	gotoxy(x, ++y);
	printf("     :                                       ,--```    `--'\n");
	gotoxy(x, ++y);
	printf("     :          ��                           ;\n");
	gotoxy(x, ++y);
	printf("     :          ��                           :\n");
	gotoxy(x, ++y);
	printf("     ;                                      :\n");
	gotoxy(x, ++y);
	printf("    (                                       ;\n");
	gotoxy(x, ++y);
	printf("     `-.                       ��          ,'\n");
	gotoxy(x, ++y);
	printf("       ;                      ����          :\n");
	gotoxy(x, ++y);
	printf("     .'                             .-._,'\n");
	gotoxy(x, ++y);
	printf("   .'                               `.\n");
	gotoxy(x, ++y);
	printf("_.'               ��                .__;\n");
	gotoxy(x, ++y);
	printf("`._              �縷               ;\n");
	gotoxy(x, ++y);
	printf("   `.                            :          ,---------------------.\n");
	gotoxy(x, ++y);
	printf("     `.               ,..__,---._;          |                     |\n");
	gotoxy(x, ++y);
	printf("       `-.__         :                      |                     |\n");
	gotoxy(x, ++y);
	printf("            `.--.____;                      |                     |\n");
	gotoxy(x, ++y);
	printf("                                            |                     |\n");
	gotoxy(x, ++y);
	printf("                                            |                     |\n");
	gotoxy(x, ++y);
	printf("                                            `---------------------'\n");
}

//62 * 24
//�� (26, 10)
//�縷 (28, 18)
//���� (41, 14)
//�ٴ� (45, 7)
/*
					   ,-.^._                 _
					 .'      `-.            ,' ;
		  /`-.  ,----'         `-.   _  ,-.,'  `
	   _.'   `--'                 `-' '-'      ;
	  :                            ��          ;    __,-.
	  ,'                          �ٴ�          ;_,-',.__'--.
	 :                                       ,--```    `--'
	 :          ��                           ;
	 :          ��                           :
	 ;                                      :
	(                                       ;
	 `-.                       ��          ,'
	   ;                      ����          :
	 .'                             .-._,'
   .'                               `.
_.'               ��                .__;
`._              �縷               ;
   `.                            :    ,---------------------.
	 `.               ,..__,---._;    |                     |
	   `-.__         :                |                     |
			`.--.____;      Gr        |                     |
									  |                     |
									  |                     |
									  `---------------------'
*/