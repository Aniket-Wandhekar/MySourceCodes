//Write a program which accepts string from user and reverse that string.


#include <stdio.h>  
 
void revstr(char *start)  
{
	char *end = start;
	char temp;
	
	while(*end!='\0')
	{
		end++;
	}
	end--;
	
	while(start < end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		
		start++;
		end--;
		
	} 
}  
      
int main()  
{  
    char arr[50]; 
	
    printf ("Enter the string: ");  
    scanf("%[^'\n']s",arr); 
		    
    revstr(arr);
	
    printf ("Modified string is: %s", arr);  
}  