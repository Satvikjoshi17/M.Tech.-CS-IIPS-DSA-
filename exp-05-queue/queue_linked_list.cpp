#include <iostream>
#include <conio.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
class Queue
{
    node *front,*rear;
    public: Queue()
    {
        front=NULL;
        rear=NULL;
    }
    void insert();void remove();void display();
};
void Queue::insert()
{
    node *n; char c;
    do{
        
        n=new node;
        cout<<"Enter a value to insert: ";
        cin>>n->data;
        n->next=NULL;
        if(front==NULL)
        {
            front=n;
            rear=n;
        }
        else
        {
            rear->next=n;
        }
            rear=n;
            c=getch();
        }
      while(c=='y' || c=='Y');
}
void Queue::remove()
{
    if(front==NULL)
    {
        cout<<"Queue empty";
    }
    else
    {
        int x=front->data;
        if(front==rear)
        {
            front=NULL;
            rear=NULL;
        }
        else
        {
            front=front->next;
        }
        cout<<x<<" removed from queue\n"<<x;
    }
}
void Queue::display()
{
    if(front==NULL)
    {
        cout<<"Queue empty";
    }
    else
    {
        node*t;
        for(t=front;t!=NULL;t=t->next)
        {
            cout<<t->data<<" ";
        }
    }
    
}
int main()
{
    Queue q;
    int choice;char c;
    do
    {
        cout<<"1. Insert 2. Remove 3. Display "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: q.insert(); break;
            case 2: q.remove(); break;
            case 3: q.display(); break;
        }
        cout<<"\nDo you want to continue? Press y or Y: ";
        c=getch();
    }while(c=='y' || c=='Y');
    getch();
    return 0;
}