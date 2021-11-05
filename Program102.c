#include<stdio.h>

void Display(char *Brr)
{
	printf("%c\n",*Brr);
	Brr++;
	printf("%c\n",*Brr);
	Brr++;
	printf("%c\n",*Brr);
	Brr++;
	printf("%c\n",*Brr);
	Brr++;
	printf("%c\n",*Brr);
	Brr++;
	
	
	
}

int main()
{
	char Arr[10];
	
   printf("Enter Your name\n");
   scanf("%[^'\n']s",Arr);
   
  Display(Arr);		//Display(50);
   
	
	return 0;
}
