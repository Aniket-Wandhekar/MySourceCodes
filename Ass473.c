//Write a recursive program which displays below pattern.
//5	4	3	2	1

#include<stdio.h>

void Display()
{
	static int i = 5;
	
	if(i>=1)
	{
		printf("%d\t",i);
		i--;
		Display();
	}
		
}

int main()
{
	Display();
	
	return 0;
}

