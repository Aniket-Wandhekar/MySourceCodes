#include<stdio.h>

void TimeTable(int iStd)
{
	if(iStd == 1)
	{
		printf("Your exam is at : 11 AM\n");
	}
	else if(iStd == 2)
	{
		printf("Your exam is at : 12 NOON\n");
	}
	else if(iStd == 3)
	{
		printf("Your exam is at : 1 PM\n");
	}
	else if(iStd == 4)	
	{
		printf("Your exam is at : 2 PM\n");
	}
	else
	{
printf("wrong standard\n");
	}
}	

int main()
{
	int iValue = 0;
	
	printf("Enter your standard\n");
	scanf("%d",&iValue);
	
	TimeTable(iValue);
	
	return 0;
	
}

	