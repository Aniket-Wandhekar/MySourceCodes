//Write a java program which accepts string from user and count number of capital characters.

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
	public int CountCapital()
	{
		char Arr[] = str.toCharArray();
		int iCnt = 0,i = 0;
		
		for(iCnt=0; iCnt < Arr.length ;iCnt++)
		{
			if((Arr[iCnt]>='A') && (Arr[iCnt]<='Z'))
			{
				i++;
			}
		}
		return i;
	}
}

class Ass311
{
	public static void main(String arg[])
	{
		Marvellous mobj = new Marvellous();
		
		int iRet = 0;
		
		mobj.Accept();
		
		iRet = mobj.CountCapital();
		
		System.out.println("Count of capital characters from string is :"+iRet);	
	}
}	