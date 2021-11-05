#include <iostream>
using namespace std;
#pragma pack(1)
class Base
{
public:
    int i;
	float f;
	double d;
    Base()
    {   cout<<"Base constructor\n";  }
    ~Base()
    {   cout<<"Base destructor\n";  }
    void fun()
    {   cout<<"Inside fun\n";   }
};
class Derived : public Base         // Single level inheritance
{
public:
   
	int i;
	double h;
    Derived()  {   cout<<"Derived constructor\n";  }
    ~Derived()  {   cout<<"Derived destructor\n" ; }
    void gun()
    {   cout<<"Inside gun\n";   }
};

int main()
{
    //Base bobj;
    Derived dobj;
    //dobj.fun();
	
	cout<<sizeof(dobj)<<"\n";
    return 0;
}