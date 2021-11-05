//Accept number as well as  position and check whether that bit is on or off.



#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;


bool CheckBit(UINT iNo,UINT iPos)
{
	UINT iMask = 0x00000001;
	UINT iResult = 0;
	
	if((iPos<1)||(iPos>32))
	{
		return false;
	}
	
	iMask = iMask << (iPos-1);
	
	iResult=iNo & iMask;
	
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
	UINT iBit = 0;
	
	bool bRet = false;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	printf("Enter The position\n");
	scanf("%d",&iBit);
	
	
	bRet=CheckBit(iValue,iBit);
	
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




