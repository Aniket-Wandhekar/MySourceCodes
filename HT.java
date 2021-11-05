import java.util.*;

class HT
{
	public static void main(String arg[])
	{
		//			key		value
		Hashtable <String,Integer> hobj = new Hashtable <String,Integer>();
		
		hobj.put("PPA",15000);
		hobj.put("LB",14000);
		hobj.put("PML",12500);
		hobj.put("LSPUI",21500);
		hobj.put("Angular",15000);
		hobj.put("c#",14500);
		
		System.out.println(hobj.get("LB"));	//data search with key
		
		System.out.println("Size of Hashtable is : "+hobj.size());
		System.out.println("Data from Hashtable");
		hobj.remove("c#");  //key ch dyavi lagte reomve la
		Enumeration eobj = hobj.keys();
		
		while(eobj.hasMoreElements())
		{
			System.out.println(eobj.nextElement());
		}
		
		hobj.clear();
		hobj = null;
		
	}
}
