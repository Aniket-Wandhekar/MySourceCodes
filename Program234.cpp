//Recursion cha code
//accept number from user and return the addition of that digits of number

#include<iostream>
using namespace std;

int SumI(int iNo)
{
	int iSum = 0;
	
	while(iNo != 0)
	{
		iSum = iSum + (iNo % 10);
		iNo = iNo / 10;
	}
	return iSum;	
}

int SumR(int iNo)
{
	static int iSum = 0;
	
	if(iNo != 0)
	{
		iSum = iSum + (iNo % 10);
		iNo = iNo / 10;
		SumR(iNo);	//updated iNo pathvla kmi zalela digit
	}
	return iSum;	
}

int main()
{
	int x = 0,iRet = 0;
	
	cout<<"Enter the number\n";
	cin>>x;
	
	//iRet = SumI(x);
	iRet = SumR(x);
	cout<<"Summesion of digits : "<<iRet<<"\n";
	
	
	return 0;
}







