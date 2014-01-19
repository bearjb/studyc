#include <stdio.h>
#define MAX 50
void main()
{
	int i,StudentNum;
	int Chinese[MAX],Math[MAX],English[MAX];
	long StudentID[MAX];
	float average[MAX],ClassAverage;

	while(1)
	{
		clrscr();
		printf("How many students are in your class? ");
		scanf("%d",&StudentNum);
		if( StudentNum <1 || StudentNum > MAX )
		{
			printf("StudentNum must be between 1 and %d.Press any key to continue",\
				MAX);
			getch();
		}
		else
		{
			break;
		}
	}

	printf("Please input a StudentID and three scores:\n");
	printf("    StudentID  Chinese  Math    English\n");
	for( i=0; i<StudentNum; i++ )
	{
		printf("No.%d>",i+1);
		scanf("%ld%d%d%d",&StudentID[i],&Chinese[i],&Math[i],&English[i]);
		average[i] = (Chinese[i]+Math[i]+English[i])/3;
	}

	for(ClassAverage=0,i=0; i<StudentNum; i++)
	{
		ClassAverage += average[i];
	}
	ClassAverage /= StudentNum;

	puts("\nStudentNum    Chinese   Math   English  Average");
	puts("-------------------------------------------------");
	for( i=0; i<StudentNum; i++ )
	{
		printf("%9ld %8d %8d %8d %8.1f\n",StudentID[i],Chinese[i],Math[i],English[i],average[i]);
	}
	puts("-------------------------------------------------");
	printf("Average of the Class = %.2f\n",ClassAverage);
	printf("Press any key to return...");
	getch();
}
