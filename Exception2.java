
import java.util.Scanner;
class Exception2
{
	public static void main(String arg[])
	{	
		Scanner sobj = new Scanner(System.in);
		int no1 = 0,no2 = 0;
		float result = 0.0f;

		System.out.println("Enter first number");
		no1 = sobj.nextInt();

		System.out.println("Enter second number");
		no2 = sobj.nextInt();
		
		try
		{
			result = no1 / no2;
			System.out.println("Division is : "+result);
		}
		catch(ArithmeticException obj)
		{
			System.out.println("Arithematic Exception occured");
		}
		catch(ArrayIndexOutOfBoundsException obj)
		{
			System.out.println("Array index exception oocured");
		}
		catch(Exception obj)
		{
			System.out.println("Exception occured");
		}
		finally
		{
			System.out.println("Inside finally");
		}
	}
}