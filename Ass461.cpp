//Write a recursive program which accept string from user and return count of white spaces.

#include<iostream>
using namespace std;
#include<stdio.h>

int WhiteSpace(char *str)
{
	static int iCnt = 0;
	
	if(*str != '\0')
	{
		if(*str == ' ')
		{
			iCnt++;
		}
		str++;
		WhiteSpace(str++);
	}
	return iCnt;	
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout<<"Enter the string\n";
	scanf("%[^'\n']s",Arr);
	
	iRet = WhiteSpace(Arr);
	
	cout<<"Number of white spaces are : "<<iRet<<"\n";
	
	
	return 0;
}
