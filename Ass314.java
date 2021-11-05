//Write a program which accepts string from user and check whether it contains vowels in it or not.


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
		char Arr[] = str.toCharArray();  
		int iCnt = 0,i = 0;
		
		while(i < Arr.length)
		{
			if((Arr[i] == 'a')||(Arr[i] == 'e')||(Arr[i] == 'i')||(Arr[i] == 'o')||(Arr[i] == 'u')
				||(Arr[i] == 'A')||(Arr[i] == 'E')||(Arr[i] == 'I')||(Arr[i] == 'O')||(Arr[i] == 'U'))
			{
				iCnt++;
			}
			i++;
		}
		return iCnt;
	}
}

class Ass314
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