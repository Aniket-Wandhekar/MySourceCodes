//Write program which accept distance in kilometers and convert it into meters
//ip : 5
//op : 5000


#include<stdio.h>

int KmtoMeter(int iNo)
{
	int meter = 0;
	
	meter = iNo * 1000;
	
	return meter;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter distance in Kilometers :\n");
	scanf("%d",&iValue);
	
	iRet = KmtoMeter(iValue);
	
	printf("Distance in meter is : %d\n",iRet);
	
	return 0;
}

	