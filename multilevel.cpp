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
class Derived : public Base         // Multilevel inheritance
{
public:
    int i;
	double d;
    Derived()  {   cout<<"Derived constructor\n";  }
    ~Derived()  {   cout<<"Derived destructor\n" ; }
    void gun()
    {   cout<<"Inside gun\n";   }
};
class Myderived : public Derived
{
public:
    int k;
	double f;
    Myderived()  {   cout<<"Myderived constructor\n";  }
    ~Myderived()  {   cout<<"Myderived destructor\n" ; }
    void sun()
    {   cout<<"Inside sun\n";   }
};

int main()
{
    Myderived dobj;
	cout<<sizeof(dobj)<<"\n";
    return 0;
}