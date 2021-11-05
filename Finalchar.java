class Demo
{
	public int i;
	public final int j;
	
	public Demo()
	{
		i = 20;
		j = 11;
	}
	
	
}

class FinalChar
{
	public static void main(String arg[])
	{
		Demo obj = new Demo();
		System.out.println("value of j : "+obj.j);
		//obj.j++;		N.A.
	}
}

	