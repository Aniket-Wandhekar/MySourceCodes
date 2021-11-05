//toggle


#include<stdio.h>


char CharToggle(char c)
{
	if((c>='A')&&(c<='Z'))
	{
		return c+32;
	}
	else if((c>='a')&&(c<='a'))
	{
		return c-32;
	}
}
int main()
{
	char ch = '\0';
	char cRet = '\0';
	
	
	printf("Enter Character\n");
	scanf("%c",&ch);
	
	cRet = CharToggle(ch);
	
	printf("Toggle letter is : %c\n",cRet);
	
	
	return 0;
}


