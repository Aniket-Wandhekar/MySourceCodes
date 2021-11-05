import java.util.*;


class LL
{
	public static void main(String arg[])
	{
		LinkedList <Integer> obj = new LinkedList<Integer>();
		
		obj.add(10);
		obj.add(20);
		obj.add(30);
		
		System.out.println("Data from Linked List");
		System.out.println(obj);
		
		Iterator <Integer>iobj = obj.iterator();
		System.out.println("Data from Linked List using iterator is :")
		
		
		while(iobj.hasNext())
		{
			System.out.println(iobj.next());
		}
		
		obj = null;
		
		
		
		
		
	}
}
