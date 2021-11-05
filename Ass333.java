//write a program which accepts number from user and return the count of digits between 3 and 7.



import java.util.*;

class Marvellous
{
	public int CountRange(int iNo)
	{
		int iDigit = 0,iCnt =0;
		
		while(iNo!=0)
		{
			iDigit = iNo%10;
			if((iDigit > 3) && (iDigit <7))
			{
				iCnt++;
			}
			iNo = iNo / 10;
		}
		return iCnt;
	}			
	
}


class Ass333
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iNumber = 0,iRet = 0;
		
		System.out.println("Enter the number");
		iNumber = sobj.nextInt();
		
		Marvellous mobj = new Marvellous();
		
		iRet = mobj.CountRange(iNumber);
		
		System.out.println("Count of digits between 3 and 7 is :"+iRet);
		
	}
}


