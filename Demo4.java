class Demo4
{
    public static void main(String arg[])
    {
		Marvellous mobj=new Marvellous();
		
		mobj.fun();
		mobj.gun();
		System.out.println("value of i from Hello1 : "+Hello1.i);
		System.out.println("value of i from Hello2 : "+Hello2.i);
		mobj.fun(11);
	}
}

interface Hello1
{
	int i = 10;
	void fun();
	void gun();
}

interface Hello2
{
	
	int i = 20;
	void fun(int no);
}

class Marvellous implements Hello1,Hello2  // 5 vi diagram
{
	public void fun()
	{
		System.out.println("inside fun");
	}
	public void fun(int no)
	{
		System.out.println("inside fun with integer");
	}
	public void gun()
	{
		System.out.println("inside gun");
	}
	
}

