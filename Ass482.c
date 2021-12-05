//Write a recursive program which displays below pattern.
//input = 5
//output = 1	2	3	4	5

#include<stdio.h>

void Display(int iNo)
{
	static int i = 1;
	
	if(i <= iNo)
	{
		printf("%d\t",i);
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

