//program for printing # for 5 times


#include <stdio.h>

void Display();		//Decleration
int main()
{
	
	Display();   //function call
	return 0;
	
}

void Display()		//Defination
{
	int i= 0;

	for(i= 1;i<=5;i++)
	{
		printf("#\n");
	}
	
}