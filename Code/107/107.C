/* draw circles */
#include <graphics.h>
void main()
{
	int b;
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"c:\\tc");
	cleardevice();
	printf("\n\n\n    This program shows the circle graph.\n");
	for(b=10;b<=140;b+=10)
		circle(320,240,b);
	getch();
	closegraph();
}
