#include<iostream>
using namespace std;

void fun(int x)   //call by value
{
	x++;
}

void gun(int *p)		//call by addresss
{
	(*p)++;
}

void sun(int &ref)		//call by function
{
	ref++;
}

int main()
{
	int a = 10, b = 10, c = 10;
	
	
	cout<<"Before call to fun"<<a<<"\n";  //10
	fun(a); //fun(10)
	cout<<"After call to fun"<<a<<"\n";		//10  a chi value change nahi hot
	
	cout<<"Before call to gun"<<b<<"\n";		//10
	gun(&b);  //gun(920)
	cout<<"After call to gun"<<b<<"\n";		//11  b chi value change hote karn call by address kely mhnun
	
	cout<<"Before call to sun"<<c<<"\n";		//10
	sun(c); 	//sun(	
	cout<<"After call to sun"<<c<<"\n";		// 11 honar
	
	return 0;
}

