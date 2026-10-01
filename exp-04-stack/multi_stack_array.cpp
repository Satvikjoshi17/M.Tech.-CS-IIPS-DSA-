#include <iostream>
#include <conio.h>
#define MAX 10
using namespace std;
class MStack
{
    int top1,top2;
    int a[MAX];
    public:
    MStack()
    {
        top1=-1;
        top2=MAX;
    }
    void push1();void push2();void pop1();void pop2();void display1();void display2();
};
void MStack::push1()
{
    int x;
    if(top1+1==top2)
    {
        cout<<"stack overflow";
    }
    else
    {
        cout<<"enter element for stack 1";
        cin>>x;
        top1++;
        a[top1]=x;
    }
}
void MStack::pop1()
{
    int x;
    if(top1==-1)
    {
        cout<<"stack 1 underflows";
    }
    else
    {
      x=a[top1];
      top1--;
      cout<<"popped element from stack 1: "<<x;
    }
}
void MStack::push2()
{
    int x;
    if(top1+1==top2)
    {
        cout<<"stack overflow";
    }
    else
    {
        cout<<"enter element for stack 2";
        cin>>x;
        top2--;
        a[top2]=x;
    }
}
void MStack::pop2()
{
    int x;
    if(top2==MAX)
    {
        cout<<"stack 2 underflows";
    }
    else
    {
      x=a[top2];
      top2++;
      cout<<"popped element from stack 2: "<<x;
    }
}
void MStack::display1()
{
    if(top1==-1)
    {
        cout<<"stack 1 is empty";
    }
    else
    {
        cout<<"elements in stack 1 are: ";
        for(int i=top1;i>=0;i--)
        {
            cout<<a[i]<<" ";
        }
    }
}
void MStack::display2()
{
    if(top2==MAX)
    {
        cout<<"stack 2 is empty";
    }
    else
    {
        cout<<"elements in stack 2 are: ";
        for(int i=top2;i<MAX;i++)
        {
            cout<<a[i]<<" ";
        }
    }
}
int main()
{
    MStack s;
    char c;int choice;
    do{
        
        cout<<"\n1.push1 2.pop1 3.display1 4.push2 5.pop2 6.display2: ";
        cin>>choice;
        switch(choice)
        {
            case 1:s.push1();break;
            case 2:s.pop1();break;
            case 3:s.display1();break;
            case 4:s.push2();break;
            case 5:s.pop2();break;
            case 6:s.display2();break;
        }
        cout<<"\ndo you want to continue? press M or m: ";
        c=getch();
    }while(c=='M'||c=='m');
    getch();
    return 0;
}