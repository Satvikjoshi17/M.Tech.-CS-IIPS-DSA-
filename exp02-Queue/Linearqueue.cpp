#include<iostream>
#include<conio.h>
using namespace std;
#define MAX 3
class Queue
{
    int f,r,x,a[MAX];
    public:
    Queue() {
        f=-1;
        r=-1;
    }
    void insert(); 
    void delete_e();
    void display();
};
void Queue::insert()
{
    if(r==MAX-1){
    cout<<"Queue overflow";
    }
    else{
        cout<<"Enter element";
        cin>>x;
        if(r==-1)
        {
            f=0;
            r=0;
        }
        else{
        r++;
        }
    
        a[r]=x;
    }
    
}
void Queue::delete_e()
{

    if(f==-1){
    cout<<"Queue underflow";
}
else{
   x= a[f];
   if(f==r)
   {
    f=-1;
    r=-1;
   }
   else
   {f++;}


cout<<x<<"removed";
}
}

void Queue::display()
{
    if(f==-1)
    {
        cout<<"Queue is underflow";

    }
    else{
        for(int i=f;i<=r;i++)
        {
            cout<<a[i]<<" ";

        }
    }
}
int main()
{
    Queue q;
    int choice;
    char c;
    do
    {
        cout<<"1.insert  2.delete  3.display";
        cin>>choice;
       switch(choice)
     {
        case 1:q.insert();
        break;
        case 2: q.delete_e();
        break;
        case 3:q.display();
        break;
     } 
     cout<<"You can continue by pressing Y or y";
     c= getch();  /* code */
    } while (c=='Y'||c=='y');
    getch();
    return 0;
}