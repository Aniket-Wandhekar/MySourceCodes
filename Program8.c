
//program for printing 1 2 3 4 5


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
		printf("%d\n",i);
	}
	
}