//write a program which accept one number from user and off 7th bit of that number if it is on .return modified number.



#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
	UINT iMask = 0x0000040;
	UINT iResult = 0;
	
	iResult=iNo^iMask;
	
	return iResult;
}

int main()
{
	UINT iValue = 0;
	int bRet = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	bRet=OffBit(iValue);
	
	printf("Modified number is:%d\n",bRet)
	
	return 0;
}

	
	