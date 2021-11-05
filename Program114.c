//smallto capital


#include<stdio.h>


char SmallToCapital(char c)
{
	if((c>='a')&&(c<='z'))
	{
		return c-32;
	}
	
}


int main()	
{
	char ch = '\0';
	char cRet = '\0';
	
	
	printf("Enter Character\n");
	scanf("%c",&ch);
	
	cRet = SmallToCapital(ch);
	
	printf("Capital letter is : %c\n",cRet);
	
	
	return 0;
}


