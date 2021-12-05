//Write a recursive program which displays below pattern.
//a	 b	c	d	e	f

#include<stdio.h>

void Display()
{
	static int i = 1;
	static char ch = 'a';
	
	if(i <= 6)
	{
		printf("%c\t",ch);
		i++;
		ch++;
		Display();
	}
		
}

int main()
{

	Display();
	
	return 0;
}

