#include<iostream>
using namespace std;

class Array
{
	private:
	int *ptr;
	int size;
	
	public:
	Array(int no = 5)
	{
		cout<<"Constructor\n";
		size = no;
		ptr = new int [size];
	}
	
	Array(Array &ref)
	{
		cout<<"Copy Constructor\n";
		
		size = ref.size;
		ptr = new int [size];
		int iCnt=0;
		
		for(iCnt=0;iCnt<size;iCnt++)
		{
			ptr[iCnt]=ref.ptr[iCnt];
		}
	}
				
	~Array()
	{
		cout<<"Destructror\n";
		delete[]ptr;
	}
	
	void Accept()
	{
		int iCnt = 0;
		cout<<"Enter the elements\n";
		
		for(iCnt=0;iCnt<size;iCnt++)
		{
			cin>>ptr[iCnt];
		}
	}
	
	void Display()
	{
		cout<<"Elements are\n";
		int iCnt = 0;
		
		for(iCnt=0;iCnt<size;iCnt++)
		{
			cout<<ptr[iCnt]<<"\n";
		}
	}
};

int main()
{
	cout<<"Inside main\n";
	int Value = 0;
	
	cout<<"Enter Number of Eelments\n";
	cin>>Value;
	
	Array* obj = NULL;
	
	obj = new Array(Value);
	obj -> Accept();
	obj -> Display();
	
	delete obj;
	
return 0;
}

	
	
			
		