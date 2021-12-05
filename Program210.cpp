//Singly Linear LL with OOP

#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE;

class SinglyLL
{
private:
    PNODE first;		//characteristics
    int size;			//characteristics
    
public:
    SinglyLL()		//default constructor
    {
        first = NULL;
        size = 0;
    }
    
    void InsertFirst(int no)
    {
        PNODE newn = new NODE;  // newn = (PNODE)malloc(sizeof(NODE))
        
        newn->data = no;
        newn->next = NULL;
        
        if(first == NULL)
        {
            first = newn;
        }
        else
        {
            newn->next = first;
            first = newn;
        }
        size++;
    }
    
    void InsertLast(int no)
    {
        PNODE newn = new NODE;  // newn = (PNODE)malloc(sizeof(NODE))
        
        newn->data = no;
        newn->next = NULL;
        
        if(first == NULL)
        {
            first = newn;
        }
        else
        {
            PNODE temp = first;
            
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newn;
        }
        size++;
    }
    
    void InsertAtPos(int no, int iPos)
    {
		PNODE newn = new NODE;
		PNODE temp = first;
		
		newn->data = no;
		newn->next = NULL;
		
		if((iPos<1)||(iPos>size+1))
		{
			return;
		}
		if(iPos == 1)
		{
			InsertFirst(no);
		}
		else if(iPos == size+1)
		{
			InsertLast(no);
		}
		else
		{
			for(int i = 1;i<iPos-1;i++)
			{
				temp = temp->next;
			}
			newn->next = temp->next;
			temp->next = newn;
			size++;
		}
		
	}
    
    void DeleteFirst()
    {
        PNODE temp = first;
        
        if(first != NULL)
        {
            first = first->next;
            delete temp;
            
            size--;
        }
    }
    
    void DeleteLast()
    {
        PNODE temp = first;
        
        if(first == NULL)
        {
            return;
        }
        else if(first->next == NULL)
        {
            delete first;
            first = NULL;
            size--;
        }
        else
        {
            while(temp->next->next != NULL)
            {
                temp = temp->next;
            }
            
            delete temp->next;
            temp->next = NULL;
            size--;
        }
    }
    void DeleteAtPos(int iPos)
    {
		
		PNODE temp = first;
		PNODE targated = NULL;
		
	
		if((iPos < 1) || (iPos > (size)))
		{
			return;
		}
		if(iPos == 1)
		{
			DeleteFirst();
		}
		else if(iPos == size)
		{
			DeleteLast();
		}
		else
		{
			for(int i = 1;i < iPos-1;i++)
			{
				temp = temp->next;
			}
			targated = temp->next;
			temp->next = targated->next;
			delete targated;
			
			size--;
		}
		
		
	}
    
    void Display()
    {
        PNODE temp = first;
        
        while(temp!= NULL)
        {
            cout<<temp->data<<"\t";
            temp = temp->next;
        }
        cout<<"\n";
    }
    
    int Count()
    {
        return size;
    }
};

int main()
{
	SinglyLL obj;
	
    int iret = 0;
    
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    
    obj.InsertLast(101);
    obj.InsertLast(111);
    
	obj.InsertAtPos(501,2);
	obj.DeleteAtPos(5);
    obj.Display();
    
    iret = obj.Count();
    cout<<"Number of elemensts are : "<<iret<<"\n";
    
    return 0;
}



















/*
 Type 1
 
 wihle(temp!= NULL)
 {
    temp = temp->next;
 }
 
 --------------------------------------
 
 Type 2
 
 while(temp->next != NULL)
 {
    temp = temp->next;
 }
 
 ---------------------------------------
 
 Type 3
 
while(temp->next->next != NULL)
 {
 temp = temp->next;
 }
 
 
 
 */










