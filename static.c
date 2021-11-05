#include<stdio.h>

void fun()			//function defination
{
	auto int i = 10;
	i++;
	printf("Value of i from fun is : %d\n",i);
}
void gun()			//function defination
{
	static int i = 10;
	i++;
	printf("Value of i from gun is : %d\n",i);
}
int main()
{
	printf("Inside main\n");
	
	fun();			//function call
	fun();
	fun();
	gun();			//function call
	gun();
	gun();
	return 0;
}