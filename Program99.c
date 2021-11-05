#include<stdio.h>

int main()
{
	char Arr[50];
	
   printf("Enter Your name\n");
   scanf("%[^'\n']s",Arr);  //string ghe enter yet nahi topryant
   
   printf("Your entered name is : %s\n",Arr);
   
	
	return 0;
}
