//Write a java program which accepts number of rows and number of columns from user and display below pattern.
/*
	*	*	*	*
	*	*	*	*
	*	*	*	*
	*	*	*	*
*/

	
import java.util.*;

class Pattern
{
	public void PatternDisplay(int iRow,int iCol)
	{
		int i = 0,j = 0;
	
		for(i=1;i<=iRow;i++)
		{
			for(j=1;j<=iCol;j++)
			{
				System.out.print("*  ");
			}
			
			System.out.println();
		}
		
	}
}


class Ass371
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iRows = 0,iColumn = 0;
		
		System.out.println("Enter number of Rows");
		iRows = sobj.nextInt();
		
		System.out.println("Enter number of Columns");
		iColumn = sobj.nextInt();
		
		Pattern pobj = new Pattern();
		
		pobj.PatternDisplay(iRows,iColumn);
		
	}
}



