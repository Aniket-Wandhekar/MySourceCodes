//write a program which accept temperature in fahrenheit and convert it into celcious
//1 celcious = (Fahrenheit -32)* (5/9)
//ip : 10
//op : -12.22222

#include<stdio.h>

float FhtoCs(float fTemp)
{
	float Celcious = 0.0;
	
	Celcious = ((fTemp-32)*5)/9;
		
	return Celcious;
	
}

int main()
{
	float fValue = 0.0;
	double dRet = 0.0;
	
	printf("Enter temp in Fahrenheit :\n");
	scanf("%f",&fValue);
	
	dRet = FhtoCs(fValue);
	
	printf("Converted temp in celcious is :%f\n",dRet);
	
	return 0;
}

	
	