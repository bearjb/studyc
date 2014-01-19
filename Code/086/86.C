#include<stdlib.h>
#include<stdio.h>
int comp(const void *j,const void *i);
void p(int p,int b[],char n[]);
void main()
{
    static char n[]={'2','3','4','5','6','7','8','9','T','J','Q','K','A'};
    int a[53],b1[13],b2[13],b3[13],b4[13];
    int b11=0,b22=0,b33=0,b44=0,t=1,m,flag,i;
    clrscr();
    puts("******************************************************");
    puts("*      This is an Automatic Dealing Card program!    *");
    puts("*  In one game, 52 cards are divided into 4 groups.  *");
    puts("******************************************************");
    printf(" >> ----- Each person's cards are as follows. -------");
    while(t<=52)           /*���Ʒ�52����*/
    {     m=random(52);      /*����0��51֮��������*/
          for(flag=1,i=1;i<=t&&flag;i++)   /*�����²�����������Ƿ��Ѿ�����*/
            if(m==a[i]) flag=0;      /*flag=1:���������µ������
                                        flag=0:�²�����������Ѿ�����*/
          if(flag)
          {
             a[t++]=m;       /*����������µ�����������������*/
             if(t%4==0) b1[b11++]=a[t-1];        /*����t��ģֵ���жϵ�ǰ*/
             else if(t%4==1) b2[b22++]=a[t-1];   /*����Ӧ�����ĸ�������*/
             else if(t%4==2) b3[b33++]=a[t-1];
             else if(t%4==3) b4[b44++]=a[t-1];
          }
      }
      qsort(b1,13,sizeof(int),comp);      /*��ÿ���˵��ƽ�������*/
      qsort(b2,13,sizeof(int),comp);
      qsort(b3,13,sizeof(int),comp);
      qsort(b4,13,sizeof(int),comp);
      p(1,b1,n); p(2,b2,n); p(3,b3,n); p(4,b4,n);     /*�ֱ��ӡÿ���˵���*/
      printf(" >> ----------- Press any key to quit... ------------");
      getch();
}
void p(int p,int b[],char n[])
{
   int i;
   printf("\n   Person No.%d   \006 ",p);        /*��ӡ���ұ��*/
   for(i=0;i<13;i++)        /*�������е�ֵת��Ϊ��Ӧ�Ļ�ɫ*/
      if(b[i]/13==0) printf(" %c",n[b[i]%13]);      /*�û�ɫ��Ӧ����*/
   printf("\n                 \003 ");        /*��ӡ���ұ��*/
   for(i=0;i<13;i++)
      if((b[i]/13)==1) printf(" %c",n[b[i]%13]);
   printf("\n                 \004 ");        /*��ӡ������*/
   for(i=0;i<13;i++)
      if(b[i]/13==2) printf(" %c",n[b[i]%13]);
   printf("\n                 \005 ");        /*��ӡ÷�����*/
   for(i=0;i<13;i++)
      if(b[i]/13==3||b[i]/13==4) printf(" %c",n[b[i]%13]);
   printf("\n");
}
int comp(const void *j,const void *i)     /*qsort���õ�������*/
{
   return(*(int*)i-*(int*)j);
}
