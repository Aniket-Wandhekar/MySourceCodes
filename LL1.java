
//ArrayList cha code

import java.util.*;


class LL1
{
	public static void main(String arg[])
	{
		ArrayList <Integer> obj = new ArrayList<Integer>();
		
		obj.add(10);
		obj.add(20);
		obj.add(30);
		
		System.out.println("Data from Linked List");
		System.out.println(obj);
		//obj.remove(2);
		obj.add(10);	//duplicates allowed ani insertion ordermmaintain
		
		Iterator <Integer>iobj = obj.iterator();
		System.out.println("Data from Array List using iterator is :");
		
		
		while(iobj.hasNext())	//pudh koni aahe ka nahi he sangte hasNext
		{
		
			System.out.println(iobj.next());
		}
		
		obj = null;
		
		
		
		
		
	}
}
