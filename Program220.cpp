
#include<iostream>
using namespace std;


void Swap(float *p,float *q)
{
	float temp;
	
	temp = *p;
	*p = *q;
	*q = temp;
	
}
	
int main()
{
	float x = 0, y = 0;
	
	cout<<"Enter first number X :\n";
	cin>>x;
	
	cout<<"Enter second number Y :\n";
	cin>>y;
	
	Swap(&x,&y);	//Swap(100,200);
	
	cout<<"Value of x becomes : "<<x<<"\n";
	cout<<"Value of y becomes : "<<y<<"\n";
	
	return 0;
}



