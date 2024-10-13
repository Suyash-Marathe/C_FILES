#include <graphics.h>
#include <conio.h>

int main ()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, D:\);
	
	outtext("Hello");
	outtexttxy(100, 100, "World");
	
	getch();
	closegraph();
	
	return 0;
}