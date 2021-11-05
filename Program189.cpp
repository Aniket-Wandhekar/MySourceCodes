//Accept number from user and count number of ON bits without using % and / operator.


#include<iostream>
using namespace std;

int CountBit(int iNo)
{
	int i = 0,iCnt = 0,iResult = 0;
	int iMask = 0X00000001;
	
	for(i=1;i<32;i++)
	{
		iResult = iNo & iMask;
		if(iResult != 0)
		{
			iCnt++;
		}
		iMask = iMask << 1;
	}
		return iCnt;
		
}

int main()
{
	int iValue = 0,iRet =0;
	
	cout<<"Enter Number\n";
	cin>>iValue;

	iRet = CountBit(iValue);
	
	cout<<"Number of ON bits is: "<<iRet<<"\n";
	
	return 0;
}
