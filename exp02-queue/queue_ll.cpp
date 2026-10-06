#include<iostream>
#include<conio.h>
using namespace std;
 struct node
  {
    int data;
    node *next;
  };
class queue
{
 
  node *front, *rear;
  public : void enqueue() ; void dequeue() ; void display();
  queue()
  {
    front = NULL ;
    rear = NULL ;
  }
};

void queue::enqueue()
{
    node *temp = new node;
    if(temp == NULL)
    {
        cout<<"Queue Overflow";
  
    }
    else
    {
    cout<<"Enter the data to be pushed : ";
    cin>>temp->data;
    temp->next = NULL;
    if(front == NULL)
    {
        front = temp;
        rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
   }
}

void queue::dequeue()
{
    node *temp;
    if(front == NULL)
    {
        cout<<"Queue Underflow";
    }
    else
    {
        temp = front;
        front = front->next;
        cout<<"Dequeued element is : "<<temp->data;
        delete temp;
    }
}

void queue::display()
{
    node *temp;
    if(front == NULL)
    {
        cout<<"Queue is empty";
    }
    else
    {
        temp = front;
        while(temp != NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
}

int main()
{
    queue q;
    int choice; char c ;
    do
    {
        cout<<"\n1. Enqueue\n2. Dequeue\n3. Display\n Enter your choice: ";
        cin>>choice; 
        switch(choice)
        {
            case 1:
                q.enqueue();
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            default:
                cout<<"Invalid choice";
        }
        cout<<"\nDo you want to continue? (y/n): ";
        c = getch();

    }
    while( c =='y' || c =='Y');
    return 0;
}