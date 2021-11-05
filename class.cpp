#include <iostream>
using namespace std;

class Demo
{
public:
//characteristics he dogh
	int ino1;
	int ino2;
	//Behaviour
	Demo()  //constructor
	{
		cout<<"Inside constructor\n";
		ino1 = 0;
		ino2 = 0;
	}
	~Demo()     //Destructor
	{
		cout<<"Inside Destructor\n";
	}
	void fun()   // he mhnje aapn object neun mhnaych paint
	{
		cout<<"Inside Fun\n";
	}
	void gun()   //mhnje ex. object la finish karun dya
	{
	cout<<"Inside gun\n";
	}
};

int main()
{
	cout<<"Inside main\n";
	
	Demo obj1;
	Demo obj2;
	obj1.fun();
	obj2.gun();
	
	
	return 0;
	
}




