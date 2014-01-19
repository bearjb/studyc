#include <graphics.h>
void main()
{
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"c:\\tc");
	cleardevice();
	printf("\n
	    Draw lines with function 'line'.");
	line(160,120,480,120);
	line(480,120,480,360);
	line(480,360,160,360);
	line(160,360,160,120);
	getch();
	cleardevice();
	getch();
	printf("\n    Draw lines with function 'lineto'.");
	moveto(160,120);
	lineto(480,120);
	lineto(480,360);
	lineto(160,360);
	lineto(160,120);
	getch();
	cleardevice();
	getch();
	printf("\n    Draw lines with function 'linerel'.");
	moveto(160,120);
	linerel(320,0);
	linerel(0,240);
	linerel(-320,0);
	linerel(0,-240);
	getch();
	closegraph();
}
