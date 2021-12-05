//Write a program which accepts number from user and return its factorial.
//IP = 5
//OP = 120

#include<stdio.h>

int Factorial(int iNo)
{
	static int iFact = 1;
	static int i = 1;
	
	if(i <= iNo)
	{
		iFact = iFact * i;
		i++;
		Factorial(iNo);
	}
	return iFact;
	
}

int main()
{
	int iValue = 0,iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = Factorial(iValue);
	printf("Factorial of given number is : %d\n",iRet);
	
	return 0;
}
