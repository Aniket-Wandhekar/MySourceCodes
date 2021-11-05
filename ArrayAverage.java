//write a program which accept N numbers from user and store it into an array and return the average of all the numbers from array


import java.util.*;

class Array
{
	public int arr[]; 

	public Array(int iSize)
	{
		arr = new int[iSize];
	}
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the elements");
		for(int i = 0; i < arr.length; i++)
		{
			arr[i] = sobj.nextInt();
		}
	}
	public double Average()
	{
		int i = 0;
		int iSum = 0;
		int iAverage = 0;
		for(i = 0; i < arr.length; i++)
		{
			iSum = iSum + arr[i];
			iAverage = iSum/(arr.length);
		}
		return iAverage;
	}
}

class ArrayAverage
{
	public static void main(String Arg[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the number of elements");
		int size = sobj.nextInt();

		Array obj = new Array(size);  //Array class cha object ani call kela size dili 

		obj.Accept();

		double iRet = obj.Average();
		System.out.println("Average is : "+iRet); 
	}
}

