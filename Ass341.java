//Write java program which accepts N number from user and accept one another number as NO.Check whether No is present or Not.



import java.util.*;

class ArrayX
{
	public int Arr[];
	public int iNumber = 0;

	public ArrayX(int iSize)
	{
		Arr = new int[iSize];
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		int iCnt = 0;
		System.out.println("Enter Elements");
		for(iCnt = 0;iCnt < Arr.length ;iCnt++)
		{
			Arr[iCnt]=sobj.nextInt();
		}
	}
	
	public void AcceptNumber()
	{
		Scanner sobj = new Scanner(System.in);
			System.out.println("Enter Number to search");
		
		iNumber = sobj.nextInt();
	}
}


class Marvellous extends ArrayX
{
	public  Marvellous(int iValue)
	{
		super(iValue);
	}
	
	public boolean CheckNumber()
	{
		int iCnt= 0;
		boolean bFlag = false;
		
		for(iCnt=0;iCnt < Arr.length;iCnt++)
		{
			if(Arr[iCnt] == iNumber)
			{
				bFlag = true;
				break;
			}
		}
		return bFlag;	
	}	
}

class Ass341
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		int iLength = 0;
		boolean bRet = false;
		
		System.out.println("Enter the number of elements");
		iLength=sobj.nextInt();
		
		Marvellous mobj = new Marvellous(iLength);
		
		mobj.Accept();
		mobj.AcceptNumber();
		
		bRet = mobj.CheckNumber();
		
		if(bRet==true)
		{
		    System.out.println("Number is present");
		}
		else
		{
			System.out.println("Number is not Present");
		}
	}
}