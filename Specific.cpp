
#include<iostream>
using namespace std;


int MaxI(int x,int y)
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

double MaxD(double x,double y)
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


char MaxC(char x,char y)
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
	int i = 10,j = 20,iRet = 0;
	double a = 3.14, b = 6.10 ,dRet = 0;
	
	iRet = MaxI(i,j);
	dRet = MaxD(a,b);
	
	
	cout<<"Max is :"<<iRet<<"\n";
	
	cout<<"MAx is :"<<dRet<<"\n";
	
	return 0;
}
