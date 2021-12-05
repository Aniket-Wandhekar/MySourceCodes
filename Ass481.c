//Write a recursive program which displays below pattern.
//input = 5
//output = *	*	*	*	*

#include<stdio.h>

void Display(int iNo)
{
	static int i = 1;
	
	if(i <= iNo)
	{
		printf("*\t");
		i++;	
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

