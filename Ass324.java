//write a java program which accepts N numbers from user and display such numbers which are divisible by 5 and 3.

import java.util.*;

class ArrayX
{
	public int Arr[];
	
	public ArrayX(int iSize)
	{
		Arr = new int[iSize];
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		int iCnt = 0;
		System.out.println("Enter the elements");
		for(iCnt = 0;iCnt<Arr.length;iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
	}
	
	public void DisplayArr()
	{
		System.out.println("elements are :");
		int iCnt =0;
		
		for(iCnt = 0;iCnt<Arr.length;iCnt++)
		{
			System.out.println(+Arr[iCnt]);
		}
	}
}
		
class Marvellous extends ArrayX
{
	public Marvellous(int iValue)
	{
		super(iValue);
	}
	
	public void Display()
	{
		int iCnt=0;
		System.out.println("Number divisible by 5 and 3 are:");
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			if(((Arr[iCnt] % 5)==0) && ((Arr[iCnt] % 3)== 0))
			{
				System.out.println(Arr[iCnt]);
			}
		}
	}
}
				
			


class Ass324
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		int iLength = 0;
		
		System.out.println("Enter number of elements");
		iLength = sobj.nextInt();
		Marvellous mobj = new Marvellous(iLength);
		
		mobj.Accept();
		mobj.DisplayArr();
		
		mobj.Display();
		
		
		
	}
}
