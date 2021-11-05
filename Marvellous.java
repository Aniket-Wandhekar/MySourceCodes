import java.lang.*;
class Arithmatic
{		//characteristics
	public int no1;
	public int no2;
	
	public Arithmatic()		//Default constructor
	{
		this.no1 = 0;
		this.no2 = 0;
	}
	
	public Arithmatic(int x , int y)	//Parameterised constructor
	{
		this.no1 = x;
		this.no2 = y;
	}
	public int Addition()  //behaviour
	{
		int ans = 0;
		ans = this.no1 + this.no2;
		return ans;
	}
	public int Substraction()     //behaviour
	{
		int ans = 0;
		ans = this.no1 - this.no2;
		return ans;
	}
	
}

class Marvellous
{
	public static void main(String arg[])
	{
		System.out.println("Inside Main");
		
		Arithmatic obj1; 			//reference
		obj1 = new Arithmatic();
		
		Arithmatic obj2 = new Arithmatic(21,11);	//dynamic memory allocation
		
		int ret = 0;
		ret = obj2.Addition();
		System.out.println("Addition is : "+ret);
		
		System.out.println("Substraction is : "+ret);
		
	
	}
}
