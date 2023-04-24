/*Write a class to have at least 3 data members along with their getter and setter method.
	Create 3 different objects of this class and print those objects*/

#include<iostream>
using namespace std;

class Information
{
	           
private:            //variable declaration as Privte in Encapsulation to get effect of getter and setter method
    string name;
    int age{};
    char gender{};

public:
    	//setter methods to set name,age and gender
    void setName(string Name) 
    {
        name = std::move(Name);		//rvalue-reference to an object
    }

    void setAge(int Age) 
    {
        age = Age;
    }

    void setGender(char Gender) 
    {
        gender = Gender;
    }

    	//getter methods to return name,age and gender

    string getName() 
    {
        return name;
    }

    const int getAge()
    {
        return age;
    }

    const char getGender() 
    {
        return gender;
    }
};


int main()
{
	Information obj1;		//first object

	obj1.setName("Aniket Wandhekar");
    obj1.setAge(24);
    obj1.setGender('M');

    cout<< "...Information of Students..."<<"\n\n";

    cout << "Students name: " << obj1.getName() <<"\n";
    cout << "Students age: " << obj1.getAge() << "\n";
    cout << "Students gender: " << obj1.getGender() << "\n\n";

    Information obj2;	//Second object

	obj2.setName("Sanket Wandhekar");
    obj2.setAge(21);
    obj2.setGender('M');

    cout << "Students name: " << obj2.getName() <<"\n";
    cout << "Students age: " << obj2.getAge() << "\n";
    cout << "Students gender: " << obj2.getGender() << "\n\n";

    Information obj3;		//third object

	obj3.setName("Amruta Wandhekar");
    obj3.setAge(23);
    obj3.setGender('F');

    cout << "Students name: " << obj3.getName() <<"\n";
    cout << "Students age: " << obj3.getAge() << "\n";
    cout << "Students gender: " << obj3.getGender() << "\n\n";

    

	return 0;
}
