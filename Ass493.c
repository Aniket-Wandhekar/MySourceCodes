//Write a recurssive program which accept string from user and count the number of characters.
//ip = Hello
//op = 5

#include<stdio.h>

int Strlen(char * str)
{
	static int iCnt = 0;
	
	if(*str != '\0')
	{
		iCnt++;
		str++;
		Strlen(str);
	}
	return iCnt;
		
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet = Strlen(Arr);
	printf("Number of characters from string is : %d\n",iRet);
	
	
	return 0;
}


