#include<iostream>
using namespace std;

template <class T>

class Array
{
	public:
	
	int Size; //size always integer in case of array so no T here.

	T *Arr;
	
	Array(int);
	~Array();
	void Accept();
	void Display();
	T Maximum();
	
};

	
    template<class T>
	T Array<T> :: Maximum()
	{
    T Max = Arr[0];
    int i = 0;
    for(i = 0; i < Size; i++)
    {
        if(Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }
    return Max;
	}

	
    template <class T>
    Array <T>::Array(int length)
	{
		Size = length;
		Arr = new T[Size];
	}
	
	template <class T>
	Array <T>::~Array()
	{
		delete[]Arr;
	}
	
	template <class T>
	void Array <T>::Accept()
	{
		int i = 0;
		cout<<"Enter the elements\n";
		for(i=0;i<Size;i++)
		{
			cin>>Arr[i];
		}
	}
	
	template <class T>
	void Array <T>::Display()
	{
		int i = 0;
		cout<<"Elements are \n";
		for(i=0;i<Size;i++)
		{
			cout<<Arr[i]<<"\n";
		}
	}
	

int main()
{
	
	Array <int>obj(5);		//ith sangav lagt
	obj.Accept();
	obj.Display();
	
	int iret = obj.Maximum();
	cout<<"Max is :"<<iret<<"\n";
	
	
	Array <char>obj2(4);
	obj2.Accept();
	obj2.Display();
	

	return 0;
}
