 //2. Write a program which accept number from user and print even factors of that number. 
 //Input : 24
 //Output: 2 4 6 8 12 

#include<stdio.h>

void DisplayFactor(int iNo) 
{ 
    int icnt = 0; 
    if(iNo <= 0) 
    { 
        iNo = -iNo; 
    } 
    
    for(icnt = 1; icnt<iNo ;icnt++) 
    { 
        if( iNo % icnt == 0 && icnt % 2 == 0) 
        { 
            printf("%d\t",icnt); 
        } 
        
    } 
} 

int main() 
{ 
     int iValue = 0; 
 
     printf("Enter number\n"); 
     scanf("%d",&iValue); 
     DisplayFactor(iValue); 
     return 0; 
}
