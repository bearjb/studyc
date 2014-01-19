#define ListSize 100/* 假定表空间大小为100 */
#include <stdio.h>
#include <stdlib.h>
void Error(char * message)
{
printf("错误:%s\n",message);
exit(1);
}
struct Seqlist{
int  data[ListSize];/* 向量data用于存放表结点 */
int length; /*  当前的表长度 */
};
/* 以上为定义表结构 */

/* ------------以下为两个主要算法---------- */
void InsertList(struct Seqlist *L, int x, int i)
{
/* 将新结点x插入L所指的顺序表的第i个结点ai的位置上 */
int j;
if ( i < 0 || i > L -> length )
Error("position error");/* 非法位置，退出 */
if ( L->length>=ListSize )
Error("overflow");
 for ( j=L->length-1 ; j >= i ; j --)
L->data[j+1]=L->data [j];
L->data[i]=x ;
L->length++ ;
}

void DeleteList ( struct Seqlist *L, int i )
{/* 从L所指的顺序表中删除第i个结点ai */
int j;
 if ( i< 0 || i > L-> length-1)
Error( " position error" ) ;
 for ( j = i+1 ; j < L-> length ; j++ )
    L->data [ j-1 ]=L->data [ j]; /* 结点前移 */
L-> length-- ; /* 表长减小 */
}
/* ===========以下为验证算法而加======= */
void Initlist(struct Seqlist *L)
{
	L->length=0;
}
/* 显示顺序表的内容 */
void DisplayList(struct Seqlist *L)
{
	int i;
	puts("Now the list is:");
	for(i=0;i<L->length;i++)
		printf("%d ",L->data[i]);
	printf("\n");
	return;
}
void main()
{
	 struct Seqlist *SEQA;
	 int i,n,t;
	 SEQA = (struct Seqlist *)malloc(sizeof(struct Seqlist));
	 Initlist(SEQA);
	 clrscr();
	 puts("Please input the size of the list:");
	 scanf("%d",&n);
	 puts("Please input the elements of the list one by one:");
	 for (i=0;i<n;i++)
	 {
		 scanf("%d",&t);
		 InsertList (SEQA,t,i);
	 }
	 DisplayList(SEQA);
	 puts("Please input the position of the element you want to delete:");
	 scanf("%d",&t);
	 DeleteList (SEQA,t);
	 DisplayList(SEQA);
	 puts("Please input the element you want to insert:");
	 scanf("%d",&t);
	 printf("Please input the position of the element( <= %d):",SEQA->length-1);
	 scanf("%d",&i);
	 InsertList(SEQA,t,i);
	 DisplayList(SEQA);
	 puts("\n Press any key to quit...");
	 getch();
}
