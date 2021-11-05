//Write a program which accept one number and position from user and check whether bit at that position is on or off.If bit is on return true otherwise return false.


#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo,UINT iPos)
{
	UINT iMask=0x00000001;
	UINT iResult = 0;
	
	if((iPos<1)||(iPos>32))
	{
		printf("Not a valid Bit\n");
	}
	
	iMask = iMask << (iPos-1);
	
	iResult = iNo & iMask;
	
	if(iResult==iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	UINT iValue = 0;
	UINT iPosition = 0;
	bool bRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	printf("Enter the Position\n");
	scanf("%d",&iPosition);
	
	bRet=CheckBit(iValue,iPosition);
	
	if(bRet==true)
	{
		printf("Bit is ON\n");
	}
	else
	{
		printf("Bit is OFF\n");
	}
	
	return 0;
}

	
	



