//Write a java program which accepts number from user and check the the count of odd numbers.

import java.util.*;

class Marvellous
{
	public int CheckOdd(int iNo)
	{
		int iDigit = 0,iCnt =0;
		
		while(iNo!=0)
		{
			iDigit = iNo%10;
			if((iDigit % 2) != 0)
			{
				iCnt++;
			}
			iNo = iNo / 10;
		}
		return iCnt;
	}			
	
}


class Ass332
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iNumber = 0,iRet = 0;
		
		System.out.println("Enter the number");
		iNumber = sobj.nextInt();
		
		Marvellous mobj = new Marvellous();
		
		iRet = mobj.CheckOdd(iNumber);
		
		System.out.println("Count of Odd digits is :"+iRet);
		
	}
}