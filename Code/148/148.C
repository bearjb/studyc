#include <conio.h>

void window_3d( int, int, int, int, int, int );

int main(void)
{
	directvideo = 0;
	textmode(3);
	textbackground( WHITE );
	textcolor( BLACK );
	clrscr();
	window_3d( 10,4,50,12, BLUE, WHITE );
	gotoxy( 17,6);
	cputs("The first window");
	window_3d(20,10,60,18,RED, WHITE );
	gotoxy(17,6);
	cputs("The second window");
	window_3d(30,16,70,24,GREEN, WHITE );
	gotoxy(17,6);
	cputs("The third window");
	getch();
	return 0;
}

void window_3d( int x1, int y1, int x2, int y2, int bk_color, int fo_color)
/*����ͶӰ���ڵ���ʾ
  x1,y1, x2, y2�Ǵ��ڵĴ�С
  bk_color�Ǳ���ɫ
  fo_color��ǰ��ɫ�����ı�����ɫ
*/
{
	textbackground(BLACK);
	window(x1, y1,x2, y2); /*����������*/
	clrscr();
	textbackground(bk_color); /*���ñ���ɫ*/
	textcolor(fo_color); /*����ǰ��ɫ*/
	window(x1-2, y1-1, x2-2, y2-1); /*��ʵ�ʵĴ���*/
	clrscr();
}