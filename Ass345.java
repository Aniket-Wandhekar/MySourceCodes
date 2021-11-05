//Write java program which accepts N numbers from user and return product of all Odd elements.


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
		System.out.println("Enter Elements");
		for(iCnt = 0;iCnt < Arr.length ;iCnt++)
		{
			Arr[iCnt]=sobj.nextInt();
		}
	}
	
	
}


class Marvellous extends ArrayX
{
	public  Marvellous(int iValue)
	{
		super(iValue);
	}
	
	public int Product()
	{
		int iCnt= 0;
		int iProduct = 1;

		
		for(iCnt=0;iCnt < Arr.length;iCnt++)
		{
			if((Arr[iCnt] % 2 != 0))
			{
				
				iProduct = iProduct * Arr[iCnt];
			}
		}
		return iProduct;
		
	}	
}

class Ass345


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
		
		
		iRet = mobj.Product();
		
	
		
		if(iRet>1)
		{
			System.out.println("Product of all numbers is :"+iRet);
		}
		else
		{
			System.out.println("No Odd elements for product");
		}
   
		
	}
}
