
import Marvellous.PPA.Mathematics;

import Marvellous.Python.Demo;


class Don
{
	public static void main(String Arg[])
	{
		Mathematics mobj= new Mathematics();
		
		Demo dobj = new Demo();
		
		int ret = mobj.Add(10,11);
		System.out.println("Addition is :"+ret);
		
		dobj.fun();
		
		
	}
}
