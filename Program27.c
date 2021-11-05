#include<stdio.h>

void Display();  //function decleration

int main()		//entry point function
{
	Display();		//function call
	
	return 0;
}

void Display()		//function defination
{
	int iNo = 7521; //local variable
	int iDigit = 0;


	while(iNo>0)
	{
		iDigit = iNo % 10;  
		printf("%d\n",iDigit); 
		iNo = iNo / 10;
	}
}

