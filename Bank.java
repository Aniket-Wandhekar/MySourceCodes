import java.util.*;

class Banking
{
	private String AccNo;
	private String Name;
	private long Balance;

	Scanner sobj = new Scanner(System.in);

	public void OpenSavingAccount()
	{
		System.out.println("Enter Name :");
		Name = sobj.next();
		System.out.println("Enter Saving Account Number :");
		AccNo = sobj.next();
		System.out.println("Enter Balance :");
		Balance = sobj.nextInt();	
	}


	public void OpenCurrentAccount()
	{
		System.out.println("Enter Name :");
		Name = sobj.next();
		System.out.println("Enter Current Account Number :");
		AccNo = sobj.next();
		System.out.println("Enter Balance :");
		Balance = sobj.nextInt();
	}


   

	public void Deposit()
	{
		long amt;  
        System.out.println("Enter the amount you want to deposit: ");  
        amt = sobj.nextLong();  
        Balance = Balance + amt;  

	}

	 public void ShowAccount()
     {  
        System.out.println("Name of account holder: " + Name);  
        System.out.println("Account no.: " + AccNo);   
        System.out.println("Balance: " + Balance);  
    }  

      //method to search an account number  
    public boolean search(String ac_no) 
    {  
        if (AccNo.equals(ac_no)) {  
            ShowAccount();  
            return (true);  
        }  
        return (false);  
    } 

}


class Bank
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		Banking obj = new Banking();

		obj.OpenSavingAccount();
		obj.OpenCurrentAccount();
		obj.Deposit();
		
		  BankDetails C[] = new BankDetails[2]; 

		 System.out.print("Enter account no. you want to search: ");  
                        String ac_no = sobj.next();  
                        boolean found = false;  
                        for (int i = 0; i < C.length; i++)
                        {  
                            found = C[i].search(ac_no);  
                            if (found)
                            {  
                                break;  
                            }  
                        }  
                        if (!found) 
                        {  
                            System.out.println("Search failed! Account doesn't exist..!!");  
                        }  

		obj.ShowAccount();
	}
}