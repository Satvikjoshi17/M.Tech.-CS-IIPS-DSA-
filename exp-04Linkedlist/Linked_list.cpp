#include<iostream>
#include<conio.h>
using namespace std;
struct node{
    int data,p;
    node* next;
};
class LL{
    node* start;
    public:
    LL(){
        start=NULL;
    }
    void create();
    void insert(int v,int p);
    void display();
};
void LL:: create()
{
    node* on;
    node* nn;
    char c;
    do{
        nn=new node;
        cout<<"Enter data";
        cin>>nn->data;
        nn->next=NULL;
        if(start==NULL)
        {
            start=nn;
        }
        else{
            on->next=nn;

        }
        on=nn;
        cout<<"Want to continue ";
        c=getch();
        //cin>>c;

    }
    while(c=='Y'||c=='y');
}
void LL::insert(int v,int p)
{
    node *nn ,*temp;
    int i;
    nn=new node;
    nn->data=v;
    nn->next=NULL;
    if(p==1||start==NULL)
    {
        nn->next=start;
        start=nn;

    }
    else{
        i=1;
        temp=start;
        while(i<(p-1)&& temp->next!=NULL)
        {
            temp=temp->next;
            i++;
        }
        nn->next=temp->next;
        temp->next=nn;
    }

}
void LL::display(){
    if(start==NULL){
        cout<<"List is empty";
    }
    else{
        node* t;
        for(t=start;t!=NULL;t=t->next)
        {
            cout<<t->data;
        }
    }
}
int main()
{
    LL l;
    int choice;
    char c;
    do{
    cout<<"1.create  2.insert 3.display";
    cin>>choice;
    switch(choice)
    {
        case 1: l.create();
        break;
        case 2: l.insert(2,8);
        break;
        case 3: l.display();
       break;
    }
    cout<<"You can continue by pressing y or Y";
    
    c=getch();
}
    while(c=='Y'||c=='y');
getch();
}
