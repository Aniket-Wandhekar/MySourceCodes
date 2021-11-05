//Write a program which accepts number from user and ON its first 4 bits.Reverse Modified Number.



#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
	UINT iMask = 0x0000000f;
	UINT iResult = 0;
	
	iResult = iNo|iMask;
	
	return iResult;
}

int main()
{
	UINT iValue = 0;
	int bRet = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	bRet=OnBit(iValue);
	
	printf("Modified number is:%d\n",bRet);
	
	
	return 0;
}

	
	