//Program for accept the area in square feet and convert it into square meter.
// 1 Sq. feet = 0.0929 square meter
// ip : 5
//op : 0.464515

#include<stdio.h>

double SquareMeter(int iNo)
{
	double Sqmeter = 0.0;
	
	Sqmeter=(iNo * 0.0929);

	return Sqmeter;
}

int main()
{
	int iValue = 0;
	double dRet = 0;
	
	printf("Enter Are in Square feet\n");
	scanf("%d",&iValue);
	
	dRet = SquareMeter(iValue);
	
	printf("Area in square meter is : %f\n",dRet);
	
	return 0;
}
