#include<stdio.h>

//#pragma pack(1)
struct Demo
{
	int no;
	char ch;
	float f;
	int d;
};

int main()
{
struct Demo obj1;
	
	obj1.no = 11;
	obj1.ch = 'M';
	obj1.f = 3.14;
	obj1.f = 51;
	
	printf("%d",sizeof(obj1));
	
	return 0;
}