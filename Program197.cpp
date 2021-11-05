//Accept Range from user and ON bits in that range.



#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OnRange(UINT iNo,int iStart,int iEnd)
{
	return (iNo ^ ((0XFFFFFFFF << (iStart - 1)) & (0XFFFFFFFF >>(32 - iEnd))));
	
}

int main()
{
	UINT iValue = 0,iRet =0,i=0,j=0;
	
	cout<<"Enter Number\n";
	cin>>iValue;
	
	cout<<"Enter starting position\n";
	cin>>i;
	
	cout<<"Enter ending position\n";
	cin>>j;
	
	
	iRet = OnRange(iValue,i,j);
	
	cout<<"Updated number is : "<<iRet<<"\n";
	
	return 0;
}










