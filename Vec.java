import java.util.*;

class Vec
{
	public static void main(String str[])
	{
		Vector <Integer> vobj1 = new Vector<Integer>();		//Default 10 milnare ani samplyavr prt 10 milnare
		System.out.println("Size of vobj1 is : "+vobj1.size());
		System.out.println("Capacity of vobj1 : "+vobj1.capacity());
		
		
		Vector <Integer> vobj2 = new Vector<Integer>(20);	//20 bhrle ki 20 milnare
		System.out.println("Size of vobj2 is : "+vobj2.size());
		System.out.println("Capacity of vobj2 : "+vobj2.capacity());
		
		
		Vector <Integer> vobj3 = new Vector<Integer>(40,30);	//40(pahila parameter)capacity  complete zalyavr 30(dusra parameter) de ajun
		System.out.println("Size of vobj3 is : "+vobj3.size());
		System.out.println("Capacity of vobj3 : "+vobj3.capacity());
		
		vobj1.add(11);
		vobj1.add(21);
		vobj1.add(51);
		vobj1.add(101);
		
		System.out.println("Size of vobj1 is : "+vobj1.size());
		
		vobj1.remove(2);	//51 jail yane
		vobj1.set(0,12);	//11 jaun 12 yeil..update zali value
		
		Iterator <Integer> iobj = vobj1.iterator();
		
		while(iobj.hasNext())
		{
			System.out.println(iobj.next());
		}
		
		vobj1.clear();
		
	}
}

	