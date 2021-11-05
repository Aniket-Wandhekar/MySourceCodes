//Accept one word from user through command line arguments and display length of that word.


import java.util.*;

class CountChar
{
	public static void main(String arg[])
	{
		System.out.println("Total Number of arguments are : "+arg.length);
		System.out.println("Command line arguments are :");
		
		for(int i = 0;i< arg.length;i++)
		{
			System.out.println(arg[i]);
		}
		
		
	}
}

	
	