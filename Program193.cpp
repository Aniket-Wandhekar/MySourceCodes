//Accept number from user and toggle first and last nibble.



#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleNibble(UINT iNo)
{
	UINT iMask = 0xF000000F;
	UINT iResult =0;
	
	iResult = iNo ^ iMask;
	
	return iResult;
	
}


int main()
{
	UINT iValue = 0,iRet =0,i=0;
	
	cout<<"Enter Number\n";
	cin>>iValue;
	
	
	iRet = ToggleNibble(iValue);
	
	cout<<"Updated number is : "<<iRet<<"\n";
	
	return 0;
}






