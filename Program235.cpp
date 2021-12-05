//Recursion cha code
//Factorial kadha.
// Ip = 4
//1*2*3*4 =24


#include<iostream>
using namespace std;

int FactorialI(int iNo)
{
	int iFact = 1;
	
	while(iNo != 0)
	{
		iFact = iFact * iNo;
		iNo--;
	}
	return iFact;
}

int FactorialR(int iNo)
{
	static int iFact = 1;
	
	if(iNo != 0)
	{
		iFact = iFact * iNo;
		iNo--;
		FactorialR(iNo);
	}
	return iFact;
		
}

int main()
{
	int x = 0,iRet = 0;
	
	cout<<"Enter the number\n";
	cin>>x;
	
	//iRet = FactorialI(x);
	iRet = FactorialR(x);
	cout<<"Factorial is  : "<<iRet<<"\n";
	
	
	return 0;
}






