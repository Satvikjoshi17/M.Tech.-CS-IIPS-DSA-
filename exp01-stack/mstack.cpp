#include <iostream>
#define MAX 10
using namespace std;
class Mstack
{
private:
    int a[MAX], top1, top2, x;

public:
    void push1();
    void pop1();
    void push2();
    void pop2();
    void display1();
    void display2();
    Mstack()
    {
        top1 = -1;
        top2 = MAX;
    }
};
void Mstack::push1()
{
    if (top1 == top2 - 1)
        cout << "stack is full";
    else
    {
        cout << "enter value ";
        cin >> x;
        top1++;
        a[MAX] = x;
    }
}
 void Mstack:: pop1()
{  int d;
    if (top1==-1)
    cout<<"stack is empty";
    else{
        top1--;
        cout<<d<<"element removed";   
    }
}
void Mstack::push2()
{
if(top2=top1+1)cout <<"the stack is full";
else{
    top2--;
    cout<<"enter the element \n";
    cin>>a[top2];
}
}
void Mstack::pop2(){
    if(top2==MAX-1)cout<<"stack is empty";
    else{
        top2--;
        cout<<"Element removed";
    }
}
void Mstack::display1(){
    for(int i=0;i<=top1;i++){
        cout<<a[i];
    }
}
void Mstack::display2(){
for(int i=top2;i<=MAX-1;i++){
    cout<<a[i];
}}
void main(){
    Mstack s;
    int choice; char c;
    do{
    cout<<"1 push1() \n 2 pop1()\n 3 push2()\n 4 pop2()\n 5 display1()\n 6 display2()\n";
    cin>>choice;
        switch(choice){
            case 1:s.push1();break;
            case 2:s.pop1();break;
            case 3:s.push2();break;
            case 4:s.pop2();break;
            case 5:s.display1();break;
            case 6:s.display2();

        }
    }while(c=='Y'||c=='y');
}