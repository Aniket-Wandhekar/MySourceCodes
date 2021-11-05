//Write a program which accepts one number from user and toggle contents of firstand last nibble of that number.Return modified number.


#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleNibble(UINT iNo)
{
	UINT iMask=0xF000000F;
	UINT iResult = 0;
	
	
	
	iResult = iNo ^ iMask;
	
	return iResult;
}

int main()
{
	UINT iValue = 0;
	
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	
	iRet=ToggleNibble(iValue);
	
	printf("Modified Number is : %d\n",iRet);
	
	
	return 0;
}

	
	



