//5)Write a java program to swap two string variables without using third or temp variable?

import java.util.*;

public class SwapWithoutTemp 
{  
    public static void main(String args[]) {  
        String a = "Good";  
        String b = "Morning";  

        System.out.println("Before swap: " + a + " " + b);  

        a = a + b;  

        b = a.substring(0, a.length() - b.length());  

        a = a.substring(b.length());  

        System.out.println("After swap: " + a + " " + b);  
    }  
} 


/*
 OUTPUT :

 C:\Users\HP\Desktop\JPP Task>javac SwapWithoutTemp.java

C:\Users\HP\Desktop\JPP Task>java SwapWithoutTemp
Before swap: Good Morning
After swap: Morning Good
 */