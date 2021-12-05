//code with string
//count the elements of string
#include<stdio.h>
#include<iostream>
using namespace std;

int StreLenI(char * str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		iCnt++;
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
	
	iRet =StreLenI(Arr);
	cout<<"Lenght of string is :"<<iRet<<"\n";
	
	return 0;
}











