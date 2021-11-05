//Write a program which accept number from user and return multiplication of all digits.


import java.util.*;

class Marvellous
{
	public int Multiply(int iNo)
	{
		int iDigit = 0,iCnt =0,iMult = 1;
		
		while(iNo!=0)
		{
			iDigit = iNo%10;
			iMult = iMult * iDigit;
			iNo = iNo / 10;
		}
		return iMult;
	}			
	
}


class Ass334
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


