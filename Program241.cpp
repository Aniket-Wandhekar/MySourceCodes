// code with string
//count capital charcter of string
#include<stdio.h>
#include<iostream>
using namespace std;

int CountCapitalI(char * str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout<<"Enter string\n";
	scanf("%[^'\n']s",Arr);
	
	
	
	iRet =CountCapitalI(Arr);
	cout<<"count of capital element of string is :"<<iRet<<"\n";
	return 0;
}











