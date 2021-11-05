//1. accept one number from user and print number of even number on screen
//i/p 7
//o/p 2 4 6 8 10 12 14



#include <stdio.h>

void printEven(int iNo)
{
    int icnt = 0;   //decleration
    int iNum =0;   //decleration
	
    if(iNo <= 0)
    {
        return;     //filter - jar aapn negative value dili tr he tyala positive krt
    }
    
    for(icnt=1;icnt<=iNo;icnt++)
    {
        iNum=icnt*2;
        printf("%d\t",iNum);
    }
    
}

int main()
{
    int iValue=0;
    printf("enter number : ");
    scanf("%d",&iValue);
	
    printEven(iValue);

    return 0;
}