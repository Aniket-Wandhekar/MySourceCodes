#include<iostream>
using namespace std;

template <class T>

T Max(T x,T y)
{
	if(x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	int i = 10, j = 10, iRet;
	double a = 3.10, b = 6.10 , dRet;
	char ch1 = 'G' ,ch2 = 'A' ,cRet;
	iRet = Max(i,j);
	cout<<"MAx is :"<<iRet<<"\n";
	
	dRet = Max(a,b);
	cout<<"MAx is :"<<dRet<<"\n";
	
	cRet = Max(ch1,ch2);
	cout<<"Max is :"<<cRet<<"\n";
	
	
	return 0;
}
