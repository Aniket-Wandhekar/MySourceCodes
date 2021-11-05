//Accept alphabet from user and check whetehr it is alphabet or not.

#include<stdio.h>
#include<stdbool.h>


int CheckAlphabet(char ch)
{
	if((ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z'))
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
	
	printf("Enter the alphabet\n");
	scanf("%c",&cValue);
	
	bRet=CheckAlphabet(cValue);
	
	if(bRet==true)
	{
		printf("It is Alphabet");
	}
	else
	{
		printf("It is not an Alphabet");
	}
	
	return 0;
}



