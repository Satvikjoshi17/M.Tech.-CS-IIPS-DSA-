#include <iostream>
#include <conio.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
class Stack
{
    Node *top;
    public:
    Stack()
    {
        top=NULL;
    }
    void push();void pop();void display();
};
void Stack::push()
{
    Node *nn=new Node;
    if(nn==NULL)
    {
        cout<<"stack overflow";
    }
    else
    {
    cout<<"enter element to be pushed: ";
    cin>>nn->data;
    nn->next=top;
    top=nn;
    }
}
void Stack::pop()
{
    Node *t;  
    if(top==NULL)
    {
        cout<<"stack underflows";
    }
    else
    {
        cout<<top->data<<" deleted ";
        t=top;
        top=top->next;
        delete t;
    }
}
void Stack::display()
{
    Node *t;
    if(top==NULL)
    {
        cout<<"stack is empty";
    }
    else
    {
      for(t=top;t!=NULL;t=t->next)
      {
         cout<<t->data<<" ";
      }  
    }
}
int main()
{
    Stack s; char c;int choice;
    do
    {
        cout<<"\n1.push n2.pop 3.display: ";
        cin>>choice;
        switch(choice)
        {
            case 1:s.push();
            break;
            case 2:s.pop();
            break;
            case 3:s.display();
            break;
        }
        cout<<"\n want to continue? press S or s: " ;
        c=getch();
     }while(c=='s'||c=='S');
    getch();
    return 0;
}
