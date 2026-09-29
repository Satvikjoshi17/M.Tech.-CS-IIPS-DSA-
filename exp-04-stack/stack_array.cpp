// 26. implement stack using array

#include <iostream>
#include <conio.h>
#define MAX 5
using namespace std;
class Stack
{
    int top;int x;
    int a[MAX];

public:
    Stack() { top = -1; }
    void push();
    void pop();
    void display();
};
void Stack::push()
{
    if (top >= (MAX - 1))
    {
        cout << "Stack Overflow";
    }
    else
    {
        cout << "Enter a value to push: ";
        cin >> x;
        top++;
        a[top]=x;
    }
}
void Stack::pop()
{
    if(top==-1)
    {
        cout<<"stack underflows";
    }
    else
    {
        x=a[top];
        top--;
        cout<<x<<" popped from stack\n";
    }
}
void Stack::display()
{
    if(top==-1)
    {
        cout<<"stack is empty";
    }
    else
    {
        cout<<"Stack elements are: ";
        for(int i=top;i>=0;i--)
        {
            cout<<a[i]<<" ";
        }
    
    }
}
int main()
{
    Stack s;char c;
    int choice;
    do
    {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            s.push();
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;
        default:
            cout << "Invalid choice!";
        }
        cout<<"\n want to continue? press y or Y";
        c=getch(); 
    } while (c=='y' || c=='Y');
    getch();
    return 0;
}