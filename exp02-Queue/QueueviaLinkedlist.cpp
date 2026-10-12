#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
  node* next;
  int data;
};
class Queue
{
    node* front;
    node* rear;
    public:
    void delete_e();
    void display();
    void insert();
    Queue()
    {
        front= NULL;
        rear= NULL;
    }
};
void Queue::insert()
{
    node* nn;
    char c;
    do{
        nn=new node;
        cout<<"Enter data";
        cin>>nn->data;
        nn->next=NULL;
        if(front==NULL)
        {
            front=nn;
    
        }
        else{
            rear->next=nn;
        }
        rear=nn;
        cout<<"Enter more data?";
        c=getch();
    }
    while(c=='Y'||c=='y');
}
void Queue::delete_e()
{
    if(front==NULL)
    cout<<"Queue is empty";
    else{
        int x=front->data;
        if(front==rear)
        {
            front=NULL;
            rear==NULL;

        }
        else{
            front=front->next;
        }
        cout<<"deleted"<<x;
    }
}
void Queue::display()
{
    node* t;
    if(front==NULL)
    {
        cout<<"It is empty";
    }
    else 
    for(t=front;t!=NULL;t=t->next)
    {
        cout<<t->data;

    }
}
int main()
{
    Queue q;
    int choice;
    char c;
    do{
    cout<<"1.insert  2.delete_e  3.display";
    cin>>choice;
    switch(choice)
    {
        case 1: q.insert();
        break;
        case 2: q.delete_e();
        break;
        case 3: q.display();
        break;
    }
    cout<<"You can continue by pressing y or Y";
    
    c=getch();
}
    while(c=='Y'||c=='y');
getch();
}