//Write a recursive program which displays below pattern.
//ip = 6
//op = a	b   c	d	e	f

#include<stdio.h>

void Display(int iNo)
{
	static int i = 1;
	static char ch = 'a';
	
	if(i <= iNo)
	{
		printf("%c\t",ch);
		i++;
		ch++;
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

