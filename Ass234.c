//Write a program which accept string from uyser and display only digits from that string.

#include<stdio.h>

void DisplayDigits(char *str)
{
	while(*str!='\0')
	{
		if((*str>='0')&&(*str<='9'))
		{
			printf("%c",*str);
		}
		str++;
	}	
}

int main()
{
	char arr[50];
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
	 
	DisplayDigits(arr);
	
	return 0;
}
