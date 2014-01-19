#define ListSize 100/* �ٶ���ռ��СΪ100 */
#include <stdio.h>
#include <stdlib.h>
void Error(char * message)
{
printf("����:%s\n",message);
exit(1);
}
struct Seqlist{
int  data[ListSize];/* ����data���ڴ�ű��� */
int length; /*  ��ǰ�ı��� */
};
/* ����Ϊ�����ṹ */

/* ------------����Ϊ������Ҫ�㷨---------- */
void InsertList(struct Seqlist *L, int x, int i)
{
/* ���½��x����L��ָ��˳���ĵ�i�����ai��λ���� */
int j;
if ( i < 0 || i > L -> length )
Error("position error");/* �Ƿ�λ�ã��˳� */
if ( L->length>=ListSize )
Error("overflow");
 for ( j=L->length-1 ; j >= i ; j --)
L->data[j+1]=L->data [j];
L->data[i]=x ;
L->length++ ;
}

void DeleteList ( struct Seqlist *L, int i )
{/* ��L��ָ��˳�����ɾ����i�����ai */
int j;
 if ( i< 0 || i > L-> length-1)
Error( " position error" ) ;
 for ( j = i+1 ; j < L-> length ; j++ )
    L->data [ j-1 ]=L->data [ j]; /* ���ǰ�� */
L-> length-- ; /* ����С */
}
/* ===========����Ϊ��֤�㷨����======= */
void Initlist(struct Seqlist *L)
{
	L->length=0;
}
/* ��ʾ˳�������� */
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
