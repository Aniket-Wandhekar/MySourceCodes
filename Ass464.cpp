//Write a recursive program which accept number from user and return the smallest digit.


#include<iostream>
using namespace std;

int SmallDigit(int iNo)
{
	static int iDigit = 0;
	static int iSmall = iNo % 10;
	
	if(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit < iSmall)
		{
			iSmall = iDigit;
		}
		iNo = iNo / 10;
		SmallDigit(iNo);
	}
	return iSmall;
}


int main()
{
	int iValue = 0,iRet = 0;
	
	cout<<"Enter the number\n";
	cin>>iValue;
	
	iRet = SmallDigit(iValue);
	cout<<"Smallest digit is : "<<iRet<<"\n";
	
	
	return 0;
}


