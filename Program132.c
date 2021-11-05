//accept number from user and check fourth bit is on or off.
//typedef krun

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;


bool CheckBit(UINT iNo)
{
	UINT iMask = 0x000000008;
	UINT iResult = 0;
	
	iResult=iNo&iMask;
	
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
	bool bRet = false;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	bRet=CheckBit(iValue);
	
	if(bRet==true)
	{
		printf("4th bit is ON\n");
	}
	else
	{
		printf("4th bit is OFF\n");
	}
	
	return 0;
}



