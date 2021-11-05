//Accept Character from user and check whether it is digit or not (0-9)




#include<stdio.h>
#include<stdbool.h>

int CheckDigit(char Ch)
{
	if((Ch>='0')&&(Ch<='9'))
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
	
	bRet=CheckDigit(cValue);
	
	if(bRet==true)
	{
		printf("It is Digit");
	}
	else
	{
		printf("It is not Digit");
	}
	return 0;
}

	
	
	

