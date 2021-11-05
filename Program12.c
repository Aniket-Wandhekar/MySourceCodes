#include <stdio.h>

void Display(int);		//Decleration
int main()
{
	int iNo = 0 ;
	
	printf("Enter Number\n");
	scanf("%d",&iNo);
	
	Display(iNo);   //function call
	return 0;
	
}

void Display(int iValue)		//Defination
{
	int i = 0;
	if(iValue== 0)
	{
		printf("Your entered number is 0\n");
		return;
	}
	if(iValue < 0)
	{
		iValue = -iValue;
	}
	
	for(i= 1;i<=iValue;i++)
	{
		printf("%d\n",i);
	}
	
}