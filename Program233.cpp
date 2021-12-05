//Accept number from user and print tevdya vela marvellous


#include<iostream>
using namespace std;

void DisplayI(int iNo)		//Iteration ch function
{
	int iCnt = 1;
	
	while(iCnt<= iNo)
	{
		cout<<"Marvellous\n";
		iCnt++;
	}
}
void DisplayR(int iNo)		//Recursion ch function
{
	static int iCnt = 1;
	
	if(iCnt<= iNo)
	{
		cout<<"Marvellous\n";
		iCnt++;
		DisplayR(iNo);	//iNo deun prt call kra
	}
	
}

int main()
{
	int i = 5;
	
	//DisplayI(i);
	
	DisplayR(i);		//call to recursive function
	
	return 0;
}

