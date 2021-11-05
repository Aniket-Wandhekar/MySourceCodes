import java.util.*;

class Students
{
	public String Name;
	public int RID;
	public int Age;
	
	public Students(String a,int b,int c)
	{
		this.Name = a;
		this.RID = b;
		this.Age = c;
	}
	
	public void Display()
	{
		System.out.println("Student name : " +this.Name +"RID : " +this.RID + "Age : " + this.Age);
	}	
}

class LLStudents
{
	public static void main(String arg[])
	{
		LinkedList <Students> lobj = new LinkedList<Students>();
		
		
		
		lobj.add(new Students("Amit",121,21));
		lobj.add(new Students("Sagar",221,51));
		lobj.add(new Students("Pooja",251,26));
		
		Students ref = null;
		
		Iterator <Students> iobj = lobj.iterator();
		while(iobj.hasNext())
		{
			ref = iobj.next();
			ref.Display();
		}
		lobj = null;
		iobj = null;
		ref = null;
		
	}
}
