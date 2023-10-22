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
	printf("      :                            ¡Û          ;  ____,-.\n");
	gotoxy(x, ++y);
	printf("      ,'                          ¹Ù´Ù          ;_,- ,.__'--.\n");
	gotoxy(x, ++y);
	printf("     :                                       ,--```    `--'\n");
	gotoxy(x, ++y);
	printf("     :          ¡Û                           ;\n");
	gotoxy(x, ++y);
	printf("     :          ½£                           :\n");
	gotoxy(x, ++y);
	printf("     ;                                      :\n");
	gotoxy(x, ++y);
	printf("    (                                       ;\n");
	gotoxy(x, ++y);
	printf("     `-.                       ¡Û          ,'\n");
	gotoxy(x, ++y);
	printf("       ;                      µ¿±¼          :\n");
	gotoxy(x, ++y);
	printf("     .'                             .-._,'\n");
	gotoxy(x, ++y);
	printf("   .'                               `.\n");
	gotoxy(x, ++y);
	printf("_.'               ¡Û                .__;\n");
	gotoxy(x, ++y);
	printf("`._              »ç¸·               ;\n");
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
//½£ (26, 10)
//»ç¸· (28, 18)
//µ¿±¼ (41, 14)
//¹Ù´Ù (45, 7)
/*
					   ,-.^._                 _
					 .'      `-.            ,' ;
		  /`-.  ,----'         `-.   _  ,-.,'  `
	   _.'   `--'                 `-' '-'      ;
	  :                            ¡Û          ;    __,-.
	  ,'                          ¹Ù´Ù          ;_,-',.__'--.
	 :                                       ,--```    `--'
	 :          ¡Û                           ;
	 :          ½£                           :
	 ;                                      :
	(                                       ;
	 `-.                       ¡Û          ,'
	   ;                      µ¿±¼          :
	 .'                             .-._,'
   .'                               `.
_.'               ¡Û                .__;
`._              »ç¸·               ;
   `.                            :    ,---------------------.
	 `.               ,..__,---._;    |                     |
	   `-.__         :                |                     |
			`.--.____;      Gr        |                     |
									  |                     |
									  |                     |
									  `---------------------'
*/