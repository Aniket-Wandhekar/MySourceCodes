//Write a recursive program which displays below pattern.
//input = 5
//output = 5	4	3	2	1

#include<stdio.h>

void Display(int iNo)
{
	
	if(iNo >= 1)
	{
		printf("%d\t",iNo);
		iNo--;	
		Display(iNo);
	}
		
}

int main()
{
	int iValue = 0;
	
	printf("Enter The value\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}

