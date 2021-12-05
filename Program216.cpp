//Queue cha code

#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE;

class Queue     // Singly Linear Linked List
{
private:
    PNODE first;
    int size;
    
public:
    Queue()
    {
        first = NULL;
        size = 0;
    }
    
    void Enqueue(int no)   // InsertLast()
    {
		PNODE newn = new NODE;
		newn->data = no;
		newn->next = NULL;
		
		if(size == 0)
		{
			first = newn;
		}
		else
		{
			PNODE temp = first;
			
			while(temp->next != NULL)		//insertlast la temp->next != NULL
			{
				temp = temp-> next;
			}
			temp->next = newn;
		}
		size++;
    }
    
    int Dequeue()   // DeleteFirst()
    {
		int no = 0;
        PNODE temp = first;
		
		if(size == 0)
		{
			cout<<"Queue is empty\n";
			return -1;
		}
		
		if(size == 1)
		{
			no = first->data;
			delete first;
			first = NULL;
		}
		else
		{
			no = first->data;
			first=first->next;
			delete temp;
		}
		size--;
		return no;	//value return keli
    }
    
    void Display()
    {
		PNODE temp = first;
		
		for(int i = 1;i <= size;i++)
		{
			cout<<"|"<<temp->data<<"|\n";
			temp=temp->next;
		}
		
	}
    
    int Count()
    {
        return size;
    }
};

int main()
{
    Queue obj;
    
    obj.Enqueue(11);
    obj.Enqueue(21);
    obj.Enqueue(51);
    obj.Enqueue(101);
    
	cout<<"Elements of queue\n";
    obj.Display();          // 11       21          51
    int iret = obj.Count();     // 3
    cout<<"Size of queue is : "<<iret<<"\n";        // 3
    
	
    iret = obj.Dequeue();       // 11
    cout<<"Removed element is :"<<iret<<"\n";                     // 11
    
	
    return 0;
}
