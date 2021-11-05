//Accept charachter from user and check whether it is capital or not.

#include<stdio.h>
#include<stdbool.h>

int CheckCapital(char Ch)
{
	if((Ch>='A')&&(Ch<='Z'))
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
	char cValue = '\0';
	bool bRet = false;
	
	printf("Enter the Character\n");
	scanf("%c",&cValue);
	
	bRet=CheckCapital(cValue);
	
	if(bRet==true)
	{
		printf("It is Capital");
	}
	else
	{
		printf("It is not capital");
	}
	return 0;
}

	
	
	

