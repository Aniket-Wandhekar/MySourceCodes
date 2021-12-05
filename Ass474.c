//Write a recursive program which displays below pattern.
//A	 B	C	D	E	F

#include<stdio.h>

void Display()
{
	static int i = 1;
	static char ch = 'A';
	
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

