
#include<iostream>
using namespace std;


void Swap(char *p,char *q)
{
	char temp;
	
	temp = *p;
	*p = *q;
	*q = temp;
	
}
	
int main()
{
	char x = '\0', y = '\0';
	
	cout<<"Enter first character :\n";
	cin>>x;
	
	cout<<"Enter second character :\n";
	cin>>y;
	
	Swap(&x,&y);	//Swap(100,200);
	
	cout<<"Value of x becomes : "<<x<<"\n";
	cout<<"Value of y becomes : "<<y<<"\n";
	
	return 0;
}



