/*
编写函数func，函数的功能是: 从字符串中删除指定的字符。同
一字母的大、小写按不同字符处理。
若程序执行时输入字符串为: turbo c and borland c++
从键盘上输入字符:n, 则输出后变为: turbo c ad borlad c++
如果输入的字符在字符串中不存在, 则字符串照原样输出。

*/
#include <stdio.h>
#define MAX 255
int func(char s[],int c)
{
	char *q=s;
	for(; *q; q++)
	if(*q != c) *(s++)=*q;
	*s='\0';
}

void main()
{
	static char str[]="Turbo c and borland c++";
	char ch;
	clrscr() ;
	printf(" The string before delete is %s.\n",str);
	printf(" Please input the char to delete : ");
	scanf("%c",&ch);
	func(str,ch);
	printf(" The string after delete is %s.\n",str);
	printf(" Press any key to quit...");
	getch();
	return;
}
