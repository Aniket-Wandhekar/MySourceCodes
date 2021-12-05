//recursion code with string
//count the elements of string
#include<stdio.h>
#include<iostream>
using namespace std;

int StreLenR(char * str)
{
	static int iCnt = 0;
	
	if(*str != '\0')
	{
		iCnt++;
		str++;
		StreLenR(str);
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout<<"Enter string\n";
	scanf("%[^'\n']s",Arr);
	
	
	
	iRet =StreLenR(Arr);
	cout<<"Lenght of string is :"<<iRet<<"\n";
	return 0;
}











