//Recursion cha code with while loop...C++ cha code.
//Accept N numbers from user and return addition of that N numbers.

#include<iostream>
using namespace std;

int SumI(int Arr[],int iSize)
{
	int iSum = 0,i = 0;
	
	/*//	1       2          3
	for(i = 0;i < iSize ; i++)
	{
		iSum = iSum + Arr[i];	//4
	}*/
	
	while(i < iSize)
	{
		iSum = iSum + Arr[i];
		i++;
	}
	
	return iSum;
}


int SumR(int Arr[],int iSize)
{
	static int iSum = 0,i = 0;
	
	if(i < iSize)
	{
		iSum = iSum + Arr[i];
		i++;
		SumR(Arr,iSize);
	}
	
	return iSum;
}

int main()
{
	int iLength = 0,i = 0,iRet = 0;
	int *p = NULL;
	
	cout<<"Enter number of elemets\n";
	cin>>iLength;
	
	p = new int[iLength];	//Memory allocation 
	
	cout<<"Enter elements\n";
	
	for(i = 0;i<iLength;i++)
	{
		cin>>p[i];
	}
	
	iRet = SumR(p,iLength);
	cout<<"Summesion is : "<<iRet<<"\n";
	
	
	delete []p;
	
	return 0;
}







