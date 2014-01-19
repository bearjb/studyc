/* text output in graph mode */
#include <graphics.h>
void main()
{
	int x;
	int gdriver=DETECT,gmode;

	initgraph(&gdriver,&gmode,"c:\\tc");
	cleardevice();
	setcolor(4);
	moveto(120,20);
	outtext("This program shows text output in graph mode.");
	setcolor(2);
	moveto(120,30);
	outtext("Hello world!");
	setcolor(3);
	moveto(120,40);
	outtext("How do you do! How do you do!");
	setcolor(5);
	moveto(120,50);
	outtext("How are you? I am fine, and you? I am fine too!");
	setcolor(6);
	moveto(120,60);
	outtext("Good morning! Good afternoon! Good evening!");
	setcolor(7);
	outtextxy(120,70,"Hello, John! Hello Mike!");
	setcolor(8);
	outtextxy(120,80,"Programming with C language!");
	setcolor(9);
	outtextxy(120,90,"Enjoy programming with C!");
	for(x=160;x<=480;x+=20)
	{
		line(160,240,x,120);
		line(160,240,x,360);
		line(480,240,640-x,360);
		line(480,240,640-x,120);
	}
	outtextxy(120,400,"Press any key to quit...");
	moveto(280,240);
	setcolor(4);
	outtext("Hello world!");
	getch();
	closegraph();
}
