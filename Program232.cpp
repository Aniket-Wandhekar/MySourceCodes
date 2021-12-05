//recursion cha code
//4 times Marvellous print kra.

#include<iostream>
using namespace std;

void DisplayI()		//Iteration
{
	int iCnt = 1;
	
	while(iCnt<= 4)
	{
		cout<<"Marvellous\n";
		iCnt++;
	}
}
void DisplayR()		//Recursion ch function
{
	static int iCnt = 1;	//Static variable pahijech recursion la
	
	if(iCnt<= 4)
	{
		cout<<"Marvellous\n";
		iCnt++;
		DisplayR();		//calling the function from same function itself
	}
	
}

int main()
{
	DisplayR();		//call to recursive function
	
	return 0;
}

