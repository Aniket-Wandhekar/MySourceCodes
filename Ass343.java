//Write a java program which accepts N numbers from user and accept one another number as No and return index of last occurence of that No.

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
	
	public int CheckLastOccurence()
	{
		int iCnt= 0;
		int index = -1;

		
		for(iCnt=0;iCnt < Arr.length;iCnt++)
		{
			if(Arr[iCnt] == iNumber)
			{
				index = iCnt;
			}
		}
		
		return index;
   
	}	
}

class Ass343

{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		int iLength = 0;
		int iRet = 0;
		
		System.out.println("Enter the number of elements");
		iLength=sobj.nextInt();
		
		Marvellous mobj = new Marvellous(iLength);
		
		mobj.Accept();
		mobj.AcceptNumber();
		
		iRet = mobj.CheckLastOccurence();
		if(iRet== -1)
		{
		    System.out.println("Number is not present");
		}
		else
		{
			System.out.println("Number lastly is Present at :"+iRet);
		}
		
		
	}
}