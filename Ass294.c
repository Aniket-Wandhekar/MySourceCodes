//write a program which accept number and position from user and Toggle that bit.and return modified number.

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo,UINT iPos)
{
	UINT iMask=0x00000001;
	UINT iResult = 0;
	
	if((iPos<1)||(iPos>32))
	{
		printf("Not a valid Bit\n");
	}
	
	iMask = iMask << (iPos-1);
	
	iResult = iNo ^ iMask;
	
	return iResult;
}

int main()
{
	UINT iValue = 0;
	UINT iPosition = 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	printf("Enter the Position\n");
	scanf("%d",&iPosition);
	
	iRet=ToggleBit(iValue,iPosition);
	
	printf("Modified Number is : %d\n",iRet);
	
	
	return 0;
}

	
	



