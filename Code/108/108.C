/* draw arc */
#include <graphics.h>
void main()
{
	int b;
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"c:\\tc");
	cleardevice();
	printf("\n\n\n   This program shows the arc graph.\n");
	for(b=10;b<=140;b+=10)
		arc(320,240,0,150,b);
	getch();
	closegraph();
}
