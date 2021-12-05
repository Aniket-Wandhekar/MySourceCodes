
//BubbleSorting cha code

//this code is doing sorting in ascending order
//ip = 9 7 10 2 5 4
//op = 2 4 5 7 9 10

import java.util.*;

class Sorting
{
	public void BubbleSort(int Arr[])
	{
		int i = 0,j = 0,temp = 0;
		int size = Arr.length;
		
		for(i = 0;i < size; i++)
		{
			for(j = 0; j < size - i - 1;j++)
			{
				if(Arr[j] > Arr[j+1])		//Decending sort kraych asl tr fakt < takaych ith..
				{
					temp = Arr[j];
					Arr[j] = Arr[j+1];
					Arr[j+1] = temp;
				}
			}
		}
	}
}

class Program257
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the size of array ");
		int size = sobj.nextInt();
		
		int Arr[] = new int[size];
		
		System.out.println("Enter the elements ");
		for(int i = 0; i < Arr.length;i++)
		{
			Arr[i] = sobj.nextInt();
		}

		Sorting obj = new Sorting();
		
		obj.BubbleSort(Arr);	//function la call
		
		System.out.println("Data after Sorting : ");
		for(int i = 0;i < Arr.length;i++)
		{
			System.out.println(Arr[i]);
		}
		
	}
}
	