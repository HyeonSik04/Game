#include <stdio.h>
#include "gotoxy.h"

int tree01(int x, int y);
int tree02(int x, int y);

void print_forest() {
	tree01(10, 2);
	tree02(40, 2);

}

int tree01(int x, int y)
{	
	gotoxy(x, y);
	printf("       # #### ####\n");
	gotoxy(x, ++y);
	printf("    ### \\/#|### |/####\n");
	gotoxy(x, ++y);
	printf("   ##\\/#/ \\||/##/_/##/_#\n");
	gotoxy(x, ++y);
	printf("   ###  \\/###|/ \\/ # ###\n");
	gotoxy(x, ++y);
	printf(" ##_\\_#\\_\\## | #/###_/_####\n");
	gotoxy(x, ++y);
	printf("## #### # \\ #| /  #### ##/##\n");
	gotoxy(x, ++y);
	printf(" __#_--###`  |{,###---###-~\n");
	gotoxy(x, ++y);
	printf("           \\ }{\n");
	gotoxy(x, ++y);
	printf("            }}{\n");
	gotoxy(x, ++y);
	printf("            }}{\n");
	gotoxy(x, ++y);
	printf("            {{}\n");
	gotoxy(x, ++y);
	printf("      , -=-~{ .-^- _  \n");
}

int tree02(int x, int y)
{
	gotoxy(x, y);
	printf("          &&& &&  & &&\n");
	gotoxy(x, ++y);
	printf("      && &\/&\|& ()|/ @, &&\n");
	gotoxy(x, ++y);
	printf("      &\/(/&/&||/& /_/)_&/_&\n");
	gotoxy(x, ++y);
	printf("   &() &\\/&|()|/&\\/ \'%\" & ()\n");
	gotoxy(x, ++y);
	printf("  &_\\_&&_\\ |& |&&/&__%_/_& &&\n");
	gotoxy(x, ++y);
	printf("&&   && & &| &| /& & % ()& /&&\n");
	gotoxy(x, ++y);
	printf(" ()&_---()&\&\\|&&-&&--%---()~\n");
	gotoxy(x, ++y);
	printf("     &&     \\|||\n");
	gotoxy(x, ++y);
	printf("             |||\n");
	gotoxy(x, ++y);
	printf("             |||\n");
	gotoxy(x, ++y);
	printf("             |||\n");
	gotoxy(x, ++y);
	printf("       , -=-~  .-^- _\n");
	gotoxy(x, ++y);
}
