#include<iostream>
#include<conio.h>
#define MAX 3
using namespace std;
class DQ{
    int f,r,x,a[MAX];
    public:
    DQ()
    {
        f=-1;
        r=-1;
    }
    void delete_f();
    void delete_r();
    void insert_r();
    void insert_f();
    void display();
};
void DQ::insert_r()
{
    if(f==(r+1)%MAX){
    cout<<"DeQueue overflow";
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
       r=(r+1)%MAX;
        }
    
        a[r]=x;
    }
    
}
void DQ::delete_f()
{

    if(f==-1){
    cout<<"DeQueue underflow";
}
else{
   x= a[f];
   if(f==r)
   {
    f=-1;
    r=-1;
   }
   else
   {f=(f+1)%MAX;}


cout<<x<<"removed";
}
}
void DQ::insert_f()
{
 if(r==(MAX+(f-1))% MAX)
   { cout<<"Dequeue overflow";}
    else{
        cout<<"Element:";
        cin>>x;
if(r==-1)
{
    f=0;
    r=0;
}
else{
    f=(MAX+(f-1))%MAX;
}
a[f]=x;
} 
}
void DQ::delete_r()
{
    if(f==-1){
        cout<<"Dequeue underflow";
    
    }
    else{
        if(f==r)
        {
            f=-1;
            r=-1;
        }
        else{
            r=(MAX+(r-1))%MAX;
        }


    }
   cout<<"remove"<<x;
}
void DQ::display()
{
    int i,j;
    if(r>=f)
    for(i=f;i<=r;i++)
    {
cout<<a[i];
    }
    else
    {

        for(i=f;i<=MAX-1;i++)
        {
            cout<<a[i];
        }
        for(j=0;j<f;j ++)
        {
            cout<<a[j];
        }
    }
}
int main()
{
   DQ d;
    int choice;
    char c;
    do
    {
        cout<<"1.insert_r  2.delete_f 3.insert_f  4.delete_r 5.display";
        cin>>choice;
       switch(choice)
     {
        case 1:d.insert_r();
        break;
        case 2: d.delete_f();
        break;
        case 3:d.insert_f();
        break;
        case 4: d.delete_r();
        break;
        case 5:d.display();
        break;
     } 
     cout<<"You can continue by pressing Y or y";
     c= getch();  /* code */
    } while (c=='Y'||c=='y');
    getch();
    return 0;
}
