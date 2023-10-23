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
	printf("      :                            ○          ;  ____,-.\n");
	gotoxy(x, ++y);
	printf("      ,'                          바다          ;_,- ,.__'--.\n");
	gotoxy(x, ++y);
	printf("     :                                       ,--```    `--'\n");
	gotoxy(x, ++y);
	printf("     :          ○                           ;\n");
	gotoxy(x, ++y);
	printf("     :          숲                           :\n");
	gotoxy(x, ++y);
	printf("     ;                                      :\n");
	gotoxy(x, ++y);
	printf("    (                                       ;\n");
	gotoxy(x, ++y);
	printf("     `-.                       ○          ,'\n");
	gotoxy(x, ++y);
	printf("       ;                      동굴          :\n");
	gotoxy(x, ++y);
	printf("     .'                             .-._,'\n");
	gotoxy(x, ++y);
	printf("   .'                               `.\n");
	gotoxy(x, ++y);
	printf("_.'               ○                .__;\n");
	gotoxy(x, ++y);
	printf("`._              사막               ;\n");
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
//숲 (26, 10)
//사막 (28, 18)
//동굴 (41, 14)
//바다 (45, 7)
/*
					   ,-.^._                 _
					 .'      `-.            ,' ;
		  /`-.  ,----'         `-.   _  ,-.,'  `
	   _.'   `--'                 `-' '-'      ;
	  :                            ○          ;    __,-.
	  ,'                          바다          ;_,-',.__'--.
	 :                                       ,--```    `--'
	 :          ○                           ;
	 :          숲                           :
	 ;                                      :
	(                                       ;
	 `-.                       ○          ,'
	   ;                      동굴          :
	 .'                             .-._,'
   .'                               `.
_.'               ○                .__;
`._              사막               ;
   `.                            :    ,---------------------.
	 `.               ,..__,---._;    |                     |
	   `-.__         :                |                     |
			`.--.____;      Gr        |                     |
									  |                     |
									  |                     |
									  `---------------------'
*/