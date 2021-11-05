//Accept character from user if the character is Capital display all the characters from that character till z.
//IF the given character is small then display all the characters till a in reverse manner.




#include<stdio.h>

void Display(char ch)
{
	if((ch>='A')&&(ch<='Z'))
	{
	 while(ch!=90)
		{
			ch++;			
			printf("%c\t\n",ch);
		}
	}
	else if((ch>='a')&&(ch<='z'))
	{
	while(ch!=97)
		{
			ch--;
			printf("%c\t\n",ch);
		}
	}
		
	
}

int main()
{
	char cValue = '\0';
	
	printf("Enter the Character\n");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	return 0;
}
