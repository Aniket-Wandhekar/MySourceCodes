final class Singleton
{
	public int x,y;
	private static Singleton obj= new Singleton();
	
	private Singleton()
	{
		System.out.println("Inside Constructor");
		
	}
	 
	public static Singleton GetObject()
	{
		return obj;
	}
	
}


class Design
{
	public static void main(String aaa[])
	{
		Singleton sobj2 = Singleton.GetObject();
		Singleton sobj1 = Singleton.GetObject();	
	}
}

	