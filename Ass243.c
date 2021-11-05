//write a program which accept string from user and accept one character.return index of first occurence of that number.

#include<stdio.h>

int FirstChar(char *str,char Ch)
{
	int index=0;
	
	while(*str!='\0')
	{
		if(*str==Ch)
		{
			break;
		}
		index++;
		str++;
	}
	
	return index;
	
	
}

int main()
{
	char Arr[50];
	char cValue='\0';
	int iRet = 0;
	
	printf("Enter The string\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter the Character\n");
	scanf(" %c",&cValue);
	
	iRet=FirstChar(Arr,cValue);
	
	printf("Character first location is :%d\n",iRet);
	
	return 0;
}

