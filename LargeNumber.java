//write a java program which accept N number from user and store it into array and display the largest number from tht array


import java.util.*;

class Array
{
	public int arr[];		//array decleration
	
	public Array(int iSize)  //parameterised constructor
	{
		arr = new int [iSize];
	}
	
	public void Accept()
	{
		int i = 0;
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the Elements");
		for(i=0;i<arr.length;i++)
		{
			arr[i]=sobj.nextInt();
		}
	}
	
	public int Large()
	{
		int i = 0;
		int iLarge = 0;
		for(i = 0;i<arr.length;i++)
		{
			if(iLarge<arr[i])
			{
				iLarge = arr[i];
			}
		}
		return iLarge;
	}
		
}

class LargeNumber
{
	public static void main(String Arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Number of elements");
		int size = sobj.nextInt();
		
		
		Array obj = new Array(size);
		obj.Accept();
		
		int iRet = obj.Large();
		System.out.println("Largest number is :"+iRet);
		
	}	
}
		
