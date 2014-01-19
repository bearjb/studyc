#include<stdio.h>
struct node
{
    int nextp;            /*ָ����һ���˵�ָ��(��һ���˵������±�)*/
    int no_out;       /*�Ƿ����º��ı�ǡ�1��û�б����º���0���ѱ����º�*/
}link[31];            /*30���ˣ�0��Ԫ��û��ʹ��*/
void main()
{
    int i,j,k;
    clrscr();
    puts("****************************************************************");
    puts("*           This program is to solve Problem of Joseph.        *");
    puts("* The Problem is presented by Gaspar, a French mathematician in*");
    puts("* 17 century, in his book Game Problems of Numbers. The problem*");
    puts("* is as follows. 15 pagans and 15 christians are in danger over*");
    puts("* the ocean, half of them must jump into sea and there is a    *");
    puts("* method to select. 30 persons in a circle, count off from the *");
    puts("* first person, the person who tells Nine, will jump. And count*");
    puts("* again, jump again and so on. The Question is how to range the*");
    puts("* circle to keep all christians alive?                         *");
    puts("****************************************************************");
    printf("---------------------------------------------\n");
    printf("\n >> The original circle is(+:pagan,@:christian):\n\n");
    for(i=1;i<=30;i++)         /*��ʼ���ṹ����*/
    {
        link[i].nextp=i+1;         /*ָ��ָ����һ����(����Ԫ���±�)*/
        link[i].no_out=1;        /*��־��Ϊ1����ʾ�˶��ڴ���*/
    }
    link[30].nextp=1;       /*��30���˵�ָ��ָ���һ�����Թ��ɻ�*/
    j=30;             /*j:ָ���Ѿ�������ϵ�����Ԫ�أ���link[i]ָ����˿�ʼ����*/
    for(i=0;i<15;i++)          /*i:�����º�������������*/
    {
        for(k=0;;)          /*k:�����ĸ��˱����º��ļ�����*/
            if(k<15)
            {
                j=link[j].nextp;            /*�޸�ָ�룬ȡ��һ����*/
                k+=link[j].no_out;         /*���м������������º����˼Ʊ��Ϊ0*/
            }
            else break;              /*������15��ֹͣ����*/
        link[j].no_out=0;        /*������� 0����ʾ�����ѱ����º�*/
    }
    for(i=1;i<=30;i++)           /*������*/
        printf("%c",link[i].no_out? '@':'+');    /*+:�����º��� @���ڴ���*/
    printf("\n\n");
    printf("---------------------------------------------\n");
    printf("\n Press any key to quit...");
    getch();
}
