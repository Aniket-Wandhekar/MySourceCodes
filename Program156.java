//accept string and check palindrome,
//equalsmethod vaprun.
//package vaprun


import MarvellousString.StringX;
import java.util.*;


class Marvellous extends StringX
{
	public boolean CheckPallindrome()		//string hi return value aahe
	{
		char Arr[] = str.toCharArray();  //character array madhe conversion
		int iStart = 0,iEnd = Arr.length-1 ;  //end length peksha 1 ne lahan asto mhnun -1
		char temp;
		
		while(iStart < iEnd)
		{
			temp = Arr[iStart];
			Arr[iStart] = Arr[iEnd];
			Arr[iEnd] = temp;
			
			iStart++;
			iEnd--;
		}
		
		String newstr = new String(Arr);
		boolean bRet = newstr.equals(str);  //hi method equals aahet ka nahi te sangt
		return bRet;
	}
}

class Program156
{
	public static void main(String arg[])
	{
		Marvellous mobj = new Marvellous();
		
		mobj.Accept();
		mobj.Display();
		
		boolean bRet;
		bRet = mobj.CheckPallindrome();
		if(bRet == true)
		{
			System.out.println("String is Pallindrome");
		}
		else
		{
			System.out.println("String is not pallindrome");
		}
		
	}
}