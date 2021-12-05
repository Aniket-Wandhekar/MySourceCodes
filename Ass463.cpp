//Write a recursive program which accepts string from user and  count number of small characters.

#include<iostream>
using namespace std;

int CountSmall(char *str)
{
	static int iCnt = 0;
	
	if(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			iCnt++;
		}
		str++;
		CountSmall(str);
	}
	return iCnt;
	
}


int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout<<"Enter the string\n";
	scanf("%[^'\n']s",Arr);
	
	iRet = CountSmall(Arr);
	cout<<"Small characters count is : "<<iRet<<"\n";
	
	return 0;
}

	
