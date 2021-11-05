//Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.


import java.util.*;

class StringX
{
	public String str;
	
	public void Accept()
	{
		Scanner sobj = new Scanner (System.in);
		
		System.out.println("Enter the string");
		
		str = sobj.nextLine();
	}
}

class Marvellous extends StringX
{
	public int CountDiff()
	{
		char Arr[] = str.toCharArray();
		int iCnt = 0,iSmall = 0,iCapital = 0;
		
		for(iCnt=0; iCnt < Arr.length ;iCnt++)
		{
			if((Arr[iCnt]>='A') && (Arr[iCnt]<='Z'))
			{
				iCapital++;
			}
			
			else if((Arr[iCnt]>='a') && (Arr[iCnt]<='z'))
			{
				iSmall++;
			}
				
		}
		if(iCapital < iSmall)
		{
			return (iSmall-iCapital);
		}
		return (iCapital-iSmall);
	}
}

class Ass313
{
	public static void main(String arg[])
	{
		Marvellous mobj = new Marvellous();
		
		int iRet = 0;
		
		mobj.Accept();
		
		iRet = mobj.CountDiff();
		
		System.out.println("Difference between small and capital characters in string is :"+iRet);	
	}
}	