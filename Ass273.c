//write program which checks whether 7th,15th,21st,28th bits are ON or OFf.


#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	UINT iMask = 0x08104040;
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
	bool bRet = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	bRet=CheckBit(iValue);
	
	if(bRet==true)
	{
		printf("Bits are On\n");
	}
	else
	{
		printf("Bits are OFF\n");
	}
	
	return 0;
}

	
	