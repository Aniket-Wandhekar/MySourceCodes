// recursion code with string
//count capital charcter of string
#include<stdio.h>
#include<iostream>
using namespace std;

int CountCapitalR(char * str)
{
	static int iCnt = 0;
	
	if(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			iCnt++;
		}
		str++;
		CountCapitalR(str);
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout<<"Enter string\n";
	scanf("%[^'\n']s",Arr);
	
	
	iRet =CountCapitalR(Arr);
	cout<<"Capital element count of string is :"<<iRet<<"\n";
	return 0;
}











