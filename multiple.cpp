#include <iostream>
using namespace std;
#pragma pack(1)
class Base1
{
public:
    int i;
	float f;
    Base1()
    {   cout<<"Base1 constructor\n";  }
    ~Base1()
    {   cout<<"Base1 destructor\n";  }
    void fun()
    {   cout<<"Inside fun\n";   }
};
class Base2
{
public:
    int j;
	float g;
    Base2()
    {   cout<<"Base2 constructor\n";  }
    ~Base2()
    {   cout<<"Base2 destructor\n";  }
    void gun()
    {   cout<<"Inside gun\n";   }
};
class Derived : public Base1, Base2
{
public:
    int i;
	double d;
    Derived()  {   cout<<"Derived constructor\n";  }
    ~Derived()  {   cout<<"Derived destructor\n" ; }
    void sun()
    {   cout<<"Inside gun\n";   }
};

int main()
{
    Derived dobj;
	
	cout<<sizeof(dobj)<<"\n";
    return 0;
}