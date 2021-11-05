//Write a java program which accepts String from user and display below pattern.
/*  
	H	e	l	l	o
	H	e	l	l	o
	H	e	l	l	o
	H	e	l	l	o
	
*/

	
import java.util.*;

class Pattern
{
	public String str;
	public void PatternDisplay(String Data)
	{
		char Arr[] = str.toCharArray();
		int i = 0,j = 0;
		for(i=Arr[0];i<Arr.length;i++)
		{
			for(j=Arr[0];j<i;j++)
			{
				System.out.print(Arr[j]);
			}
			System.out.println();
		}
		
	}
}


class Ass381
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		String str;
		
		System.out.println("Enter The String");
		String str = sobj.nextLine();
		
		Pattern pobj = new Pattern();
		
		pobj.PatternDisplay(str);
		
	}
}


