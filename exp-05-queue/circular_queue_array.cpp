#include <iostream>
#include <conio.h>
#define MAX 5
using namespace std;
class CQ
{
    int front,rear,x;
    int a[MAX];
    public:CQ()
    {
        front=-1;
        rear=-1;
    }
    public:void insert();void remove();void display();
};
void CQ::insert()
{
    if(front==(rear+1)%MAX)
    {
        cout<<"Queue Overflow";
    }
    else
    {
        cout<<"Enter a value to insert: ";
        cin>>x;
        if(rear==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear=(rear+1)%MAX;
        }
         a[rear]=x;
    }
}
void CQ:: remove()
{
    if(front==-1)
    {
        cout<<"Queue Underflow";
    }
    else
    {
        x=a[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=(front+1)%MAX;
        }
        cout<<x<<" removed from queue\n";
    }
}void CQ::display()
{
    if(front==-1)
    {
        cout<<"Queue is empty";
    }
    else
    {
        cout<<"Queue elements are: ";
        if(front<=rear)
        {
            for(int i=front;i<=rear;i++)
            {
                cout<<a[i]<<" ";
            }
        }
        else
        {
            for(int i=front;i<MAX;i++)
            {
                cout<<a[i]<<" ";
            }
            for(int i=0;i<=rear;i++)
            {
                cout<<a[i]<<" ";
            }
        }
    }
}
int main()
{
    CQ q;char c;
    int choice;
    do
    {
        cout<<"\n1.Insert 2.Remove 3.Display: ";
        cin>>choice;
        switch(choice)
        {
            case 1:q.insert();break;
            case 2:q.remove();break;
            case 3:q.display();break;
         }
        cout<<"\nDo you want to continue?Press q or Q: ";
        c=getch();
    }while(c=='q'||c=='Q');
    getch();
    return 0;
}
