//Accept string from user and reverse that string.
//string Arr new vaprun return madhe.


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
	public String ReverseX()		//string hi return value aahe
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
		
		return new String(Arr);
	
		
	}
}

class Program153
{
	public static void main(String arg[])
	{
		Marvellous mobj = new Marvellous();
		
		mobj.Accept();
		mobj.Display();
		
		String s = mobj.ReverseX();
	
		System.out.println("Reverse string is :"+s);
		
	}
}