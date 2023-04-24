//Write a program to count occurrences of each digit in a number .

import java.util.Scanner;

class Count
{

	public void Occurence(long num) 
	{

		int arr[] = new int[10];		// bcz digits are 0-9
		

		 while (num != 0) 
        {
            int dig = (int)(num % 10); //typecast to int
            arr[dig] = arr[dig] + 1;	//for count and store the value in array index of this same digit
            num = num / 10;
        }
        
        System.out.println("Digit\tOccurence");
        for (int i = 0; i < 10; i++) 
        {
            if (arr[i] != 0) 
            {
                System.out.println(i + "\t" + arr[i]);
            }
        }
	}

}

public class Problem2
{
    public static void main(String args[]) {
        
        Scanner sobj = new Scanner(System.in);
        System.out.print("Enter the number: ");

        long num = sobj.nextLong();

        Count obj = new Count();		//object of class Count

        obj.Occurence(num);     //function call
       
    }
}