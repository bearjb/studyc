/* draw ELLIPSE */
#include <graphics.h>
void main()
{
	int a=150,b;
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"c:\\tc");
	cleardevice();
	for(b=10;b<=140;b+=10,a+=10)
		ellipse(320,240,0,360,a,b);
	getch();
	closegraph();
}
