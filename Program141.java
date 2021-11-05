//accept number from user and check whether that number is prime number or not.


import java.util.*;

class Marvellous
{
	public boolean CheckPrime(int iNo)
	{
		int iCnt = 0;
		boolean bflag = true;
		
		for(iCnt=2;(iCnt<=iNo/2);iCnt++)
		{
			if((iNo%iCnt)== 0)
			{
				bflag = false;
				break;
			}
		}
		
		return bflag;	
		
	}
	
}

class Program141
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		int iValue = 0;
		boolean bRet = false;
		
		System.out.println("Enter Number");
		iValue = sobj.nextInt();
		
		Marvellous mobj = new Marvellous();
		
		bRet=mobj.CheckPrime(iValue);
	
		if(bRet==true)
		{
		   System.out.println("Number is Prime Number");
		}
		else
		{
			System.out.println("Number is Not Prime Number");
		}
		
	}
}



