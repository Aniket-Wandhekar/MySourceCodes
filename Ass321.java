//write a java program which accepts N numbers from user and return difference between Sum of even and sum of odd numbers.

import java.util.*;

class ArrayDemo
{
	public int Arr[];
	
	public ArrayDemo(int iSize)
	{
		Arr = new int[iSize];
	}
		
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		int iCnt = 0;
		System.out.println("Enter the Elements");
		for(iCnt = 0;iCnt<Arr.length;iCnt++)
		{
			Arr[iCnt] =sobj.nextInt();
		}
	}
	
	public void Display()
	{
		int iCnt = 0;
		System.out.println("Elements Are :");
		for(iCnt = 0;iCnt<Arr.length;iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}
	}
	
}	


class Marvellous extends ArrayDemo
{
	public Marvellous(int iValue)
	{
		super(iValue);
	}

    public int Diff()
	{
		int iEvenSum = 0,iOddSum = 0,iCnt=0;
		for(iCnt = 0;iCnt < Arr.length;iCnt++)
		{
		   if((Arr[iCnt] % 2)==0)
		    {
				iEvenSum = iEvenSum + Arr[iCnt];
			}
			else
			{
				iOddSum = iOddSum + Arr[iCnt];
			}
		}
		return (iEvenSum-iOddSum);
	}
}
		

class Ass321
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		int iLength = 0 ;int iRet = 0;
		
		System.out.println("Enter number of elements");
		iLength = sobj.nextInt();
		
		Marvellous mobj = new Marvellous(iLength);
		
		mobj.Accept();
		mobj.Display();
		iRet = mobj.Diff();
		
		System.out.println("Difference is : "+iRet);
		
	
	}
}
