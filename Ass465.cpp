//write a recursive code which accepts number from user and return its reverse number.


#include<iostream>
using namespace std;

int Reverse(int iNo)
{
	static int iDigit = 0;
	static int iRev = 0;
	
	if(iNo != 0)
	{
		iDigit = iNo % 10;
		iRev = (iRev * 10)+iDigit;
		iNo = iNo / 10;
		Reverse(iNo);
	}
	return iRev;
}


int main()
{
	int iValue = 0,iRet = 0;
	
	cout<<"Enter the number\n";
	cin>>iValue;
	
	iRet = Reverse(iValue);
	cout<<"Reverse number is : "<<iRet<<"\n";
	
	
	return 0;
}


