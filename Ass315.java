//Write a java program which Accepts string from user and display it in reverse order.


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
		System.out.println("String Before reverse is : "+str);
	}
}

class Marvellous extends StringX
{
	public String ReverseString()  //String hi return value aahe
	{
		char Arr[] = str.toCharArray();  
		int iStart = 0,iEnd = Arr.length - 1;
		char temp;
		
		while(iStart < iEnd)
		{
			
		temp=Arr[iStart];
		Arr[iStart] = Arr[iEnd];
		Arr[iEnd] = temp;
		
		iStart++;
		iEnd--;
		}
		
		//return new String(Arr);  //yamule ulti zaleli string return hote.ani character array bnvlela aahe aadhi to string madhe conver hoto.
		return String.valueOf(Arr);  // as pan krta yet.
	}
}

class Ass315
{
	public static void main(String arg[])
	{
		Marvellous mobj = new Marvellous();
	
		mobj.Accept();
		
		mobj.Display();
		
		String s = mobj.ReverseString();
		
		System.out.println("String after Reverse is :"+s);
		
	}
}