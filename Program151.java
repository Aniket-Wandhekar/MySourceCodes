//Accept string from user and count the vowels from string.
//using ffor loop

import java.util.*;

class StringX
{
	public String str;  
	
	public void Accept()
	{
		Scanner sobj  = new Scanner(System.in);
		System.out.println("Enter string");
		str = sobj.nextLine();
	}
	
	public void Display()
	{
		System.out.println("String is : "+str);
	}
}

class Marvellous extends StringX
{
	public int CountVowels()
	{
		char Arr[] = str.toCharArray();  //character array madhe conversion
		int iCnt = 0,i = 0;
		
		for(i = 0;i <Arr.length; i++)
		{
			if((Arr[i] == 'a')||(Arr[i] == 'e')||(Arr[i] == 'i')||(Arr[i] == 'o')||(Arr[i] == 'u'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class Program151
{
	public static void main(String arg[])
	{
		Marvellous mobj = new Marvellous();
		int iRet = 0;
		
		mobj.Accept();
		mobj.Display();
		
		iRet = mobj.CountVowels();
		
		System.out.println("Number of Vowels :"+iRet);
		
	}
}