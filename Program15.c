
//program for display 5 4 3 2 1


#include <stdio.h>

void Display();		//Decleration
int main()
{
	int iNo = 0 ;

	Display(iNo);//function call
	return 0;
	
}

void Display(int iValue)		//Defination
{
	int i = 0;
	
	for(i = 5;i >= 1;i--)
	{
		printf("%d\n",i);
	}
}
