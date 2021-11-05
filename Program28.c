//program for accept number from user and display its digits
//ip : 1567
//op : 1	5	6	7



#include<stdio.h>

void Display();  //function decleration

int main()		//entry point function
{
	int iValue = 0;
	
	printf("enter number\n");
	scanf("%d",&iValue);
	
	Display(iValue);		//function call
	
	return 0;
}

void Display(int iNo)		//function defination
{
	int iDigit = 0;


	while(iNo>0)
	{
		iDigit = iNo % 10;  
		printf("%d\n",iDigit); 
		iNo = iNo / 10;	
	}
}

