//Accept string from user and count number of Small characters.


import java.util.*;

class StringX
{
	public String str;
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the String");
		
		str = sobj.nextLine();
	}
}

class Marvellous extends StringX
{
	public int CountSmall()
	{
	char Arr[] =str.toCharArray();
	
	int i= 0,iCnt=0;
			
	for(i = 0;i < Arr.length;i++)
	{
		if((Arr[i]>='a')&&(Arr[i]<='z'))
		{
			iCnt++;
		}
	}
	return iCnt;
	}
}

class Ass312
{
	public static void main(String str[])
	{
		
		Marvellous mobj = new Marvellous();
		
		int iRet = 0;
		
		mobj.Accept();
		
		iRet = mobj.CountSmall();
		
		System.out.println("Small Characters count is :"+iRet);
		
	}
}

