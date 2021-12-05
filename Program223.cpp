//Generic cha code
#include<iostream>
using namespace std;

//Specific function
void Swap(char *p,char *q)
{
	char temp;
	
	temp = *p;
	*p = *q;
	*q = temp;
	
}

//Generic Function

template <class T>	
void SwapX(T *p,T *q)
{
	T temp;		//dont initilize any template variable,tyalach mahit nahi tyacha data
	
	temp = *p;
	*p = *q;
	*q = temp;
	
}
int main()
{
	char x = 'A', y = 'B';
	
	SwapX(&x,&y);	//Swap(100,200);
	
	cout<<"Value of x becomes : "<<x<<"\n";
	cout<<"Value of y becomes : "<<y<<"\n";
	
	int i = 11, j = 21;
	
	SwapX(&i,&j);	//Swap(100,200);
	
	cout<<"Value of x becomes : "<<i<<"\n";
	cout<<"Value of y becomes : "<<j<<"\n";
	
	return 0;
}



