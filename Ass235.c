//write a program which accept string from user and count the whitespaces.

#include<stdio.h>

int CountWhiteSpaces(char *str)
{
	int iCnt = 0;
	
	while(*str!='\0')
	{
		if(*str==' ')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char arr[50];
	int iRet = 0;
	
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
	 
	iRet=CountWhiteSpaces(arr);
	
	printf("Count of white Spaces is :%d\n",iRet);
	
	return 0;
}
