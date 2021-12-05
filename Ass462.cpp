//Write a recursive program which accept number from user and return the largest digit.

#include<iostream>
using namespace std;

int LargeDigit(int iNo)
{
	int iDigit = 0;
	static int iLarge = 0;
	
	if(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit > iLarge)
		{
			iLarge = iDigit;
		}
		iNo = iNo / 10;
		LargeDigit(iNo);
	}
	return iLarge;
}


int main()
{
	int iValue = 0,iRet = 0;
	
	cout<<"Enter the number\n";
	cin>>iValue;
	
	iRet = LargeDigit(iValue);
	cout<<"Largest digit is : "<<iRet<<"\n";
	
	
	return 0;
}
