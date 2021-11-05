//Write a program which accept radius of circle from user and calculate its area.
//pi = 3.14
//Area = Pi 8Radius *radius
//ip = 5.3
// op = 88.2026

#include<stdio.h>

double CircleArea(float);

int main()
{
	float fValue = 0;
	double dRet = 0;
	
	printf("Enter Radius\n");
	scanf("%f",&fValue);
	
	dRet = CircleArea(fValue);
	
	printf("Area of circle is : %f\n",dRet);
	
	return 0;
} 

double CircleArea(float fRadius)
{
	
	double Area = 0;
	float PI = 3.14;
	
	Area = (PI * fRadius * fRadius);
	
	return Area;
}
