

import java.util.*;

class Marvellous
{
	public boolean CheckNumber(boolean Brr[],boolean iNo)
	{
		int iCnt= 0;
		
		for(iCnt=0;iCnt < Brr.length;iCnt++)
		{
			if(Brr[iCnt] == iNo)
			{
				break;
			}
			
		}
		
		if(iCnt == Brr.length)
		{
			return false;
		}
		else
		{
			return true;
		}
		
	}	
	
	
}

class FindNumber
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		int iSize = 0,iCnt = 0,iRet = 0;
		
		System.out.println("Enter number of elements");
		iSize = sobj.nextInt();
		
		int Arr[] = new int[iSize];
		
		System.out.println("Enter Numbers");
		for(iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
		
		int iNumber = 0;
		System.out.println("Enter Number to search");
		
		iNumber = sobj.nextInt();
	
		Marvellous mobj = new Marvellous();
		
		iRet=mobj.CheckNumber(Arr,iNumber);
		if(bRet==true)
		{
		    System.out.println("Number is present");
		}
		else
		{
			System.out.println("Number is not Present");
		}
		
	}
}