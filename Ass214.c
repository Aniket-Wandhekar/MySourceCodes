//Accept character from user and check whether it is apecial  symbol or not.



#include<stdio.h>
#include<stdbool.h>

int CheckSymbol(char Ch)
{
	if((Ch>=33)&&(Ch<=47)||(Ch>=58)&&(Ch<=64))
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
	
	bRet=CheckSymbol(cValue);
	
	if(bRet==true)
	{
		printf("It is Symbol");
	}
	else
	{
		printf("It is not Symbol");
	}
	return 0;
}

	
	
	



