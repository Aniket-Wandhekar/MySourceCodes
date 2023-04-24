// Interface in Java.

/* 
1) Interface is considered as blueprint of class
2) Interface contains Abstract and public methods in it.
3) This also contains Characteristics.
4) All the characteristics of Interface are by default public,static and final.
5) In case of Interface we have to implement it inside the class by using "implements" keyword.
6) Scenarios possible are,
	class implemnts interface
	interface extends interface
	class can implement more than one interface
	class can extend one class and implements one interface
	one interface can extend another interface


= One class can implement one interface. */


import java.util.*;


interface Circle
{
	float PI = 3.14f;

	float Area(float radius);
	float Circumference(float radius);
}


class Eternus implements Circle
{
	public float Area(float radius)
	{
		float ret = 0.0f;

		ret = PI * radius * radius;
		return ret;
	}

	public float Circumference(float radius)
	{
		float ret = 0.0f;

		ret = 2 * PI * radius;
		return ret;
	}

}

class Problem5
{
	public static void main(String[] arg) 
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter Radius : ");
		float value = sobj.nextFloat();

		Eternus eobj = new Eternus();

		float fret = 0.0f;
		fret = eobj.Area(value);
		System.out.println("Area is :" +fret);

		fret = eobj.Circumference(value);
		System.out.println("Circumference is :" +fret);
		
	}
}





