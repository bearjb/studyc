#include<stdio.h>
struct node
{
    int nextp;            /*指向下一个人的指针(下一个人的数组下标)*/
    int no_out;       /*是否被扔下海的标记。1：没有被扔下海。0：已被扔下海*/
}link[31];            /*30个人，0号元素没有使用*/
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
    for(i=1;i<=30;i++)         /*初始化结构数组*/
    {
        link[i].nextp=i+1;         /*指针指向下一个人(数组元素下标)*/
        link[i].no_out=1;        /*标志置为1，表示人都在船上*/
    }
    link[30].nextp=1;       /*第30个人的指针指向第一个人以构成环*/
    j=30;             /*j:指向已经处理完毕的数组元素，从link[i]指向的人开始计数*/
    for(i=0;i<15;i++)          /*i:已扔下海的人数计数器*/
    {
        for(k=0;;)          /*k:决定哪个人被扔下海的计数器*/
            if(k<15)
            {
                j=link[j].nextp;            /*修改指针，取下一个人*/
                k+=link[j].no_out;         /*进行计数。因已扔下海的人计标记为0*/
            }
            else break;              /*计数到15则停止计数*/
        link[j].no_out=0;        /*将标记置 0，表示该人已被扔下海*/
    }
    for(i=1;i<=30;i++)           /*输出结果*/
        printf("%c",link[i].no_out? '@':'+');    /*+:被扔下海， @：在船上*/
    printf("\n\n");
    printf("---------------------------------------------\n");
    printf("\n Press any key to quit...");
    getch();
}
