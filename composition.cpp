#include <iostream>
using namespace std;

class Hello
{
public:
    int x;
    void fun()
    {
        cout<<"Inside fun\n";
    }
};
class Demo
{
public:
    int iNo;
    Hello hobj;     //composition
    
    void gun()
    {
        cout<<"Inside gun\n";
    }
};

int main()
{
    Demo dobj;
    dobj.gun();
    return 0;
}