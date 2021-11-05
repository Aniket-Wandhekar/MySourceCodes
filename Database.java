import java.sql.*;

public class Database 
{
   public static void main(String args[]) 
   {
      try
      {
		
         Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/PPA26","root","");
		 
		 System.out.println("*--Connection Successfull--*");
		 
         Statement stmt = conn.createStatement();
         ResultSet rs = stmt.executeQuery("SELECT * FROM Student");
		 
		 System.out.println("*--Database Created Successfully--*");
		
		
         while (rs.next()) 
         {
            System.out.print("RID: " + rs.getInt("RID"));
            System.out.print(", Age: " + rs.getInt("age"));
            System.out.print(", Name: " + rs.getString("name"));
            System.out.println(", City: " + rs.getString("adderss"));
         }
      } 
      catch (Exception e) 
      {
         e.printStackTrace();
      } 
   }
}






























