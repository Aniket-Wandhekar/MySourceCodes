//write a program which acceept string from user and convert it into lower case.

#include<stdio.h>

void strlwrx(char *str)
{
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			printf("%c",*str+32);
		}
		else
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
	 
	strlwrx(arr);
	
	return 0;
}
