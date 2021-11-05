//Write a java program which accepts number from user and return difference between sum of even numbers and odd numbers.


import java.util.*;

class Marvellous
{
	public int Multiply(int iNo)
	{
		int iDigit = 0,iCnt =0,iEven = 0,iOdd = 0;
		
		while(iNo!=0)
		{
			iDigit = iNo%10;
			if((iDigit % 2)==0)
			{
				iEven = iEven + iDigit;
			}
			else
			{
				iOdd = iOdd + iDigit;
			}
			
			iNo = iNo / 10;
		}
		if(iEven > iOdd)
		{
			return (iEven-iOdd);
		}
		else
		{	
			return (iOdd-iEven);
		}
		
	}			
	
}


class Ass335
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iNumber = 0,iRet = 0;
		
		System.out.println("Enter the number");
		iNumber = sobj.nextInt();
		
		Marvellous mobj = new Marvellous();
		
		iRet = mobj.Multiply(iNumber);
		
		System.out.println("Count of digits between 3 and 7 is :"+iRet);
		
	}
}




