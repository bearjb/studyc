#include<stdio.h>
int days(struct date day);
struct date{
    int year;
    int month;
    int day;
};

void main()
{
    struct date today,term;
    int yearday,year,day;
    printf("Enter year/month/day:");
    scanf("%d%d%d",&today.year,&today.month,&today.day);  /*��������*/
    term.month=12;               /*���ñ����ĳ�ʼֵ����*/
    term.day=31;                 /*���ñ����ĳ�ʼֵ����*/
    for(yearday=0,year=1990;year<today.year;year++)
    {
        term.year=year;
        yearday+=days(term);     /*�����1990����ָ�����ǰһ�깲�ж�����*/
    }
    yearday+=days(today);       /*����ָ�����е�ָ�����ڵ�����*/
    day=yearday%5;               /*������*/
    if(day>0&&day<4) printf("he was fishing at that day.\n");   /*��ӡ���*/
    else printf("He was sleeping at that day.\n");
}

int days(struct date day)
{
    static int day_tab[2][13]=
            {{0,31,28,31,30,31,30,31,31,30,31,30,31,},      /*ƽ��ÿ�µ�����*/
             {0,31,29,31,30,31,30,31,31,30,31,30,31,},
    };
    int i,lp;
    lp=day.year%4==0&&day.year%100!=0||day.year%400==0;
      /*�ж�yearΪ���껹��ƽ�꣬lp=0Ϊƽ�꣬��0Ϊ����*/
    for(i=1;i<day.month;i++)            /*���㱾������1��1���������*/
        day.day+=day_tab[lp][i];
    return day.day;
}
