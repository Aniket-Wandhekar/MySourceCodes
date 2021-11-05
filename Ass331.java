//Write java program which accept nuumber from user and return the count of even digits.



import java.util.*;

class Marvellous
{
	public int CheckEven(int iNo)
	{
		int iDigit = 0,iCnt =0;
		
	while(iNo!=0)
	{	
		iDigit = iNo % 10;
		if((iDigit % 2)== 0)
		{
			iCnt++;
		}
		iNo = iNo/10;
	}
		return iCnt;
	
	}
	
}

class Ass331
{
	public static void main(String arg[])
	{
		
		Scanner sobj = new Scanner(System.in);

		int iNumber = 0,iRet = 0;
		
		System.out.println("Enter the Number");
		iNumber = sobj.nextInt();
		
		Marvellous mobj = new Marvellous();
		
		iRet = mobj.CheckEven(iNumber);
		
		System.out.println("Count of even digits is :"+iRet);
		
		
	}
}



































































/*class Number
{ 
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		int iNumber = 0;
		System.out.println("Enter Number");
		iNumber = sobj.nextInt();
	}	
}


class Marvellous extends Number
{
	public int CheckEven()
	{
		{
		int iDigit = 0,iCnt =0;
		
		iDigit = iNumber % 10;
		if((iDigit % 2)== 0)
		{
			iCnt++;
		}
		iNumber = iNumber/10;
		}
			return iCnt;
	}
	
}

class Ass341
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		int iRet = 0;
		
		Marvellous mobj = new Marvellous(iLength);
		
		mobj.Accept();
		
		iRet = mobj.CheckEven();
		
		System.out.println("Count of even digits is :",+iRet);
		
	}
}

*/


 