//write a program which accept string from user and accept one character also.and check whether that character is present in the string or not.

#include<stdio.h>
#include<stdbool.h>

bool CheckChar(char *str,char Ch)
{
	bool bAns=false;
	
	while(*str!='\0')
	{
		if(*str==Ch)
		{
			bAns=true;
			break;
		}
		str++;
	}
	return bAns;
	
}

int main()
{
	char Arr[50];
	char cValue='\0';
	bool bRet=false;
	
	
	printf("Enter The string :");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter The Character to find :");
	scanf(" %c",&cValue);
	
	bRet=CheckChar(Arr,cValue);
	
	if(bRet == true)
	{
		printf("Character is present");
	}
	else
	{
		printf("Character is not present");
	}
	
	return 0;
}