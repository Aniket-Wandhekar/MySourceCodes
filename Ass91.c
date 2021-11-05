//accept number from user and display below pattern
//ip : 5
//op :A  B  C  D  E
#include<stdio.h>

void Display(int iNo)
{
    char ch = '\0';
    int i = 0;
   
    for(ch='A';ch <= 'Z';ch++)
    {
        if(i<iNo)
        {
            printf("%c\t",ch);
            i++;
        } 
    }
}

int main()
{
	int iValue = '\0';
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	Display(iValue);

	return 0;
}