//Write a java program which accepts number of rows and number of columns from user and display below pattern.
/*  
	A	A	A	A
	B	B	B	B
	C	C	C	C
	D	D	D	D
*/

	
import java.util.*;

class Pattern
{
	public void PatternDisplay(int iRow,int iCol)
	{
		int i = 0,j = 0;
		char ch = '\0';
		
			
		for(i=1,ch='A';i<=iRow;i++,ch++)
		{
			for(j=1;j<=iCol;j++)
			{
				System.out.print(ch+"  ");
			}
			System.out.println();
		}
		
	}
}


class Ass363
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iRows = '\0',iColumn = '\0';
		
		System.out.println("Enter number of Rows");
		iRows = sobj.nextInt();
		
		System.out.println("Enter number of Columns");
		iColumn = sobj.nextInt();
		
		Pattern pobj = new Pattern();
		
		pobj.PatternDisplay(iRows,iColumn);
		
	}
}



