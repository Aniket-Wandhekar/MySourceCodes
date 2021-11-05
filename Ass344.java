//write a java program which accepts N numbers from user and also accepts range and display all elements from that range.


import java.util.*;

class ArrayX
{
	public int Arr[];
	public int iStart = 0,iEnd = 0;

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
		System.out.println("Enter first number of range");
		
		iStart = sobj.nextInt();
		System.out.println("Enter last number of range");
		
		iEnd = sobj.nextInt();
		
	}
}


class Marvellous extends ArrayX
{
	public  Marvellous(int iValue)
	{
		super(iValue);
	}
	
	public void DisplayRange()
	{
		int iCnt= 0;
		
		System.out.println("Numbers between range are :");
		
		for(iCnt=0;iCnt < Arr.length;iCnt++)
		{
			if((Arr[iCnt] > iStart)&&(Arr[iCnt] < iEnd))
			{
				System.out.println(Arr[iCnt]);
			}
		}
	}	
}

class Ass344

{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		int iLength = 0;
		
		System.out.println("Enter the number of elements");
		iLength=sobj.nextInt();
		
		Marvellous mobj = new Marvellous(iLength);
		
		mobj.Accept();
		mobj.AcceptNumber();
		
		mobj.DisplayRange();
			
	}
}


