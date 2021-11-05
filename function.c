#include<stdio.h>

int Minimum (int iNo1 , int iNo2 )
{
if (iNo1 < iNo2 )
	{
		return iNo1;
	}
else
	{
		return iNo2;
	}
}
int main()
{
auto int iValue1 = 0, iValue2 = 0, iRet= 0;
		int(*fp)(int,int);
		fp = Minimum;

		printf("Enter first number\n");
		scanf("%d",&iValue1);
		
		printf("Enter second number\n");
		scanf("%d",&iValue2);
		
		iRet= fp(iValue1,iValue2);
		printf("Minimum number is :%d\n",iRet);
		
		return 0;
}

		
		