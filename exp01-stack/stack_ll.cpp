#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
class stackk
{
  node * top ;
  public : void push()  ; void pop(); void display();

  stackk()
  {
    top = NULL ;
  }
};

void stackk::push()
{
    node *temp = new node;
    if(temp == NULL)
    {
        cout<<"Stack Overflow";
  
    }
    else
    {
    cout<<"Enter the data to be pushed : ";
    cin>>temp->data;
    temp->next = top;
    top = temp;
   }
}

void stackk::pop()
{
    node *temp;
    if(top == NULL)
    {
        cout<<"Stack Underflow";
    }
    else
    {
        temp = top;
        top = top->next;
        cout<<"Popped element is : "<<temp->data;
        delete temp;
    }
}

void stackk::display()
{
    node *temp;
    if(top == NULL)
    {
        cout<<"Stack is empty";
    }
    else
    {
        temp = top;
        while(temp != NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
}

int main()
{
    stackk s;
    int choice; char c ;
    do
    {
        cout<<"\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1: s.push();
                    break;
            case 2: s.pop();
                    break;
            case 3: s.display();
                    break;
            case 4: cout<<"Exiting...";
                    break;
            default: cout<<"Invalid choice";
        }
        cout<<"\nDo you want to continue? (y/n) : ";
        c = getch();
    }while(choice != 4 && (c == 'y' || c == 'Y'));
    return 0;
}