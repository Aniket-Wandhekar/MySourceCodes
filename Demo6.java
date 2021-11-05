class Demo6
{
    public static void main(String arg[])
    {
		Marvellous mobj = new Marvellous();
		mobj.fun();
		mobj.gun();
	}
}

interface Base
{
	int i = 10;
	void fun();
}

interface Derived extends Base		 // 4 vi diagram
{
	void gun();
}

class Marvellous implements Derived 
{
	public void fun()
	{
		System.out.println("inside fun");
	}
	public void gun()
	{
		System.out.println("inside gun");
	}
}

