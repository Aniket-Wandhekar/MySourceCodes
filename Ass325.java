//display multiples of 11.


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
		System.out.println("Numbers multiple of 11 are:");
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			if(((Arr[iCnt] % 11)==0))
			{
				System.out.println(Arr[iCnt]);
			}
		}
	}
}
				
			


class Ass325
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
