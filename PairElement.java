//3)How to find all pairs of elements in an array whose sum is equal to given number?

import java.util.Arrays;
import java.util.Scanner;

public class PairElement {
    public static void main(String args[]) {
        
        // Reading the array from the user
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array: ");
        int size = sc.nextInt();

        int[] myArray = new int[size];
        
        System.out.println("Enter the elements of the array: ");
        for (int i = 0; i < size; i++) 
        {
            myArray[i] = sc.nextInt();
        }

        // Reading the number
        System.out.println("Enter the number: ");
        int num = sc.nextInt();

        System.out.println("The array created is: " + Arrays.toString(myArray));

        System.out.println("Pair of the elements whose sum is: " + num);

        for (int i = 0; i < myArray.length; i++) 
        {
            for (int j = i; j < myArray.length; j++) 
            {
                if ((myArray[i] + myArray[j]) == num && i != j) 
                {
                    System.out.println(myArray[i] + ", " + myArray[j]);
                }
            }
        }
    }
}

/*
 OUTPUT : 

 C:\Users\HP\Desktop\JPP Task>javac PairElement.java

C:\Users\HP\Desktop\JPP Task>java PairElement
Enter the size of the array:
8
Enter the elements of the array:
15
12
4
16
9
8
24
0
Enter the number:
24
The array created is: [15, 12, 4, 16, 9, 8, 24, 0]
Pair of the elements whose sum is: 24
15, 9
16, 8
24, 0


 */