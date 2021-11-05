//Write a java program which accepts number of rows and number of columns from user and display below pattern.
/*  A	B	C	D
	a	b	c	d
	A	B	C	D
	a	b	c	d
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
			if((i%2)==0)
			{
			for(j=1,ch='a';j<=iCol;j++,ch++)
			{
				System.out.print(ch+"  ");
			}
			}
			else
			{
			for(j=1,ch='A';j<=iCol;j++,ch++)
			{
				System.out.print(ch+"  ");
			}
			}
				
			
			System.out.println();
		}
		
	}
}


class Ass362
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



