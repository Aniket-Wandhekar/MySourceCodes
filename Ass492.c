//Write a recursive program which accepts number from user and return summesion of its digits.
//ip = 123
//op = 6

#include<stdio.h>

int DigitSum(int iNo)
{
	static int iDigit = 0;
	static int iSum = 0;
	
	if(iNo != 0)
	{
		iDigit = iNo % 10;
		iSum = iSum + iDigit;
		iNo = iNo / 10;
		DigitSum(iNo);
	}
	return iSum;
}

int main()
{
	int iValue = 0,iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = DigitSum(iValue);
	printf("Sum of digits of number is : %d\n",iRet);
	
	return 0;
}

