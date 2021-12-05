//Code for accept the array and return the array with +1 element.
//ip = 5 6 9 3 2 7
//op = 6 7 10 4 3 8

import java.util.*;

class Searching
{
	public void Change(int Arr[])
	{
		for(int i =0;i < Arr.length;i++)
		{
			Arr[i]++;
		}	
	}
}

class Program256
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array");
		int size = sobj.nextInt();
		
		int Arr[] = new int[size];
		
		System.out.println("Enter the elements");
		for(int i = 0; i < Arr.length;i++)
		{
			Arr[i] = sobj.nextInt();
		}

		Searching obj = new Searching();
		
		obj.Change(Arr);
		
		System.out.println("Data after function call");
		for(int i = 0;i < Arr.length;i++)
		{
			System.out.println(Arr[i]);
		}
		
	}
}
	