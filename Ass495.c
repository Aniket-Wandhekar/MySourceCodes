//Write a recurssive program which accepts number from user and return the product of digits.
// IP = 123
//Op = 6


#include<stdio.h>

int DigiMult(int iNo)
{
	static int iDigit = 0;
	static int iMult = 1;
	
	if(iNo != 0)
	{
		iDigit = iNo % 10;
		iMult = iMult * iDigit;
		iNo = iNo / 10;
		
		DigiMult(iNo);
	}
	return iMult;
	
}

int main()
{
	int iValue = 0,iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = DigiMult(iValue);
	printf("product of digits of given number is : %d\n",iRet);
	
	return 0;
}
