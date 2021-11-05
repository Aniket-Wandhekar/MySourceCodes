//Accept character from  user and display decimal,hexadecimal and octal value that character.


#include<stdio.h>
#include<stdbool.h>

int CheckSymbol(char Ch)
{
	if((Ch>='A')&&(Ch<='Z')||(Ch>='a')&&(Ch<='z'))
	{
		printf("Decimal Value is : %d\n",Ch);
		printf("HexaDecimal Value is : %x\n",Ch);
		printf("Octal Value is : %o\n",Ch);
		printf("Character Value is : %c\n",Ch);
	}
	
}


int main()
{
	char cValue = '\0';
	bool bRet = false;
	
	printf("Enter the Character\n");
	scanf("%c",&cValue);
	
	bRet=CheckSymbol(cValue);
	
	
	return 0;
}

	

