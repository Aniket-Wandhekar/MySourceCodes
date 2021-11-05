
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

	iDigit = iNo % 10;  //1
	printf("%d\n",iDigit); //1
	iNo = iNo / 10;		//752
	
	iDigit = iNo % 10;  //2
	printf("%d\n",iDigit);		//2
	iNo = iNo/10; //75
	
	iDigit = iNo % 10;		//5
	printf("%d\n",iDigit);	//5
	iNo = iNo /10;		//7
	
	iDigit = iNo %10;  //7
	printf("%d\n",iDigit); //7
	iNo = iNo /10;	//0
}
