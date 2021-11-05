//4. Accept one character from user and convert case of that character. 
// Input : a Output : A     A – Z = 65 to 90, 
// Input : D Output : d     a – z = 97 to 122

#include<stdio.h>

void DisplayConvert (char CValue) 
{ 
    if(CValue >= 'a' && CValue <= 'z') 
    {
     CValue=CValue-32;
     printf("%c" ,CValue ); 
    } 
    else if(CValue >= 'A' && CValue <= 'Z') 
    { 
     CValue=CValue+32;
     printf("%c" ,CValue ); 
    } 
} 
int main() 
{ 
 char cValue = '\0'; 
 
 printf("Enter character\n"); 
 scanf("%c",&cValue); 
 DisplayConvert (cValue ); 
 return 0; 
}