//write a program which accept string from user and display it in reverse order.

#include<stdio.h>
 
void DisplayRev(char *start)
{
	
	char *end = start;
	char temp;
	
   while(*end!='\0')
    {
		end++;
	}
	 end--;
	 
	 while(start<end)
	 {
		 temp = *start;
		 *start = *end;
		 *end = temp;
		 
		 start++;
		 end--;
	 }
	
	
}  

int main()
{
	char Arr[50];
	
	printf("Enter the String\n");
	scanf("%[^'\n']s",Arr);
	
	DisplayRev(Arr);
	
	printf("Modified string is: %s\n",Arr);  
	
	return 0;
}