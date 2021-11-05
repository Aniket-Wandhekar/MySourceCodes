#include<iostream>
using namespace std;

int main()
{
	int no = 11;
	int &x = no;
	int *p = &x;
	int *(&q) = p;
	
	
	
	
	cout<<x<<"\n";
	cout<<&x<<"\n";
	cout<<&no<<"\n";
	cout<<&p<<"\n";
	cout<<&q<<"\n";
	cout<<p<<"\n";
	cout<<q<<"\n";
	return 0;
}