//4)How to remove duplicate elements from ArrayList in java?

import java.util.*;

public class RemoveDuplicateArrayList {   
    public static void main(String[] args) {  
        List<Integer> l = new ArrayList<Integer>();  
        l.add(1);
        l.add(2);  
        l.add(1);  
        l.add(3);  
        l.add(1);
        l.add(4);  
        l.add(6);  
        l.add(7); 

        System.out.println("Before removing duplaicate elements : "); 
        System.out.println(l);  
        Set<Integer> s = new LinkedHashSet<Integer>(l);  

        System.out.println("After removing duplaicate elements : "); 
        System.out.println(s);  
    }  
}  

/*
 Output :

 C:\Users\HP\Desktop\JPP Task>javac RemoveDuplicateArrayList.java

C:\Users\HP\Desktop\JPP Task>java RemoveDuplicateArrayList
Before removing duplaicate elements :
[1, 2, 1, 3, 1, 4, 6, 7]
After removing duplaicate elements :
[1, 2, 3, 4, 6, 7]


 */