/* Write a base class "Shape" having two data members "Width" and "Height". Derive two classes from it "Rectangle" and " Triangle" . Both
derived classes should calculate area using single method "CalculateArea" ,which should be defined in base class and overriden in derived class */


import java.util.Scanner;

class Shape
{

	public int Height;
	public int Width;

	public Shape()
	{
		this.Height = 10;
		this.Width = 20;
	}

	public void CalculateArea()
	{
		System.out.println("Inside CalculateArea of Shape");
	}
}

class Rectangle extends Shape
{
	public void CalculateArea()
	{
		int RArea = Height * Width;
		System.out.println("Area of Rectangle is : " +RArea );
	}
	
}

class Triangle extends Shape
{
	
	public void CalculateArea()
	{
		int TArea = (Height * Width) / 2;
		System.out.println("Area of Triangle is :" + TArea );
	}
}

public class Problem3
{
	public static void main(String[] arg) 
	{
		Shape obj = new Rectangle();	//Upcasting
		obj.CalculateArea();


		Shape obj1 = new Triangle();	//Upcasting
		obj1.CalculateArea();

		
	}
}
