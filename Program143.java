
//array tyar krun input ghya ani display kra.

import java.util.*;



class Program143
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		int iSize = 0,iCnt = 0;
		
		System.out.println("Enter number of elements");
		iSize = sobj.nextInt();
		
		int Arr[] = new int[iSize];
		
		System.out.println("Enter Numbers");
		for(iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
		System.out.println("Entered elements are");
		for(iCnt = 0;iCnt < Arr.length ; iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}
		
	}
}