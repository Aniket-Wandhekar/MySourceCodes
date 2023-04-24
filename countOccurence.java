//1)How to count occurrences of each character in a string in java?

import java.util.*;

class countOccurence
{
    public static void main (String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        String str = "";

        System.out.println("Enter The String :");
        str = sobj.nextLine();
        int counter[] = new int[256]; 
        int len = str.length();

        for(int i = 0; i < len ; i++)
        {
            counter[(int) str.charAt(i)]++;
            //System.out.println(str.charAt(i));

        }
        System.out.println("Occurence of character in string " +str + " is :");
        for(int i = 0;i < 256 ;i++)
        {
            if(counter[i] != 0 )
            {
                System.out.println((char)i+ " " + counter[i]);
            }
        }
        
    }
}

/*
output : 

Enter The String :
india
Occurence of character in string india is :
a 1
d 1
i 2
n 1

 */


