#include<stdio.h>

void Display(char *Brr)
{
	printf("Name is %s\n",Brr);
}

int main()
{
	char Arr[10];
	
   printf("Enter Your name\n");
   scanf("%[^'\n']s",Arr);
   
  Display(Arr);		//Display(50);
   
	
	return 0;
}
