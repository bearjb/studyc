/*
��д����func�������Ĺ�����: ���ַ�����ɾ��ָ�����ַ���ͬ
һ��ĸ�Ĵ�Сд����ͬ�ַ�������
������ִ��ʱ�����ַ���Ϊ: turbo c and borland c++
�Ӽ����������ַ�:n, ��������Ϊ: turbo c ad borlad c++
���������ַ����ַ����в�����, ���ַ�����ԭ�������

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