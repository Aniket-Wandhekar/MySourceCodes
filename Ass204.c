//Accept Character from user and check whether it is small case or not



#include<stdio.h>
#include<stdbool.h>

int CheckSmall(char Ch)
{
	if((Ch>='a')&&(Ch<='a'))
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
	
	bRet=CheckSmall(cValue);
	
	if(bRet==true)
	{
		printf("It is Smallcase");
	}
	else
	{
		printf("It is not Smallcase");
	}
	return 0;
}

	
	
	

