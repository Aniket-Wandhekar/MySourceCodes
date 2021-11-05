#include <iostream>
using namespace std;
#pragma pack(1)
class Base
{
public:
    int i;
	float f;
	double d;
	
	void fun()
	{}
	void gun()
	{}
	
    
};
class Derived : public Base         // Single level inheritance
{
public:
   
	int i;
	double d;
	
    void sun()
    {}	
};

int main()
{
    //Base bobj;
    Derived dobj;
    //dobj.fun();
	
	cout<<sizeof(dobj)<<"\n";
    return 0;
}