#include <iostream>
#define Max 10
using namespace std ;
class Dequeue{
    int r,f,arr[Max];
    public:
    Dequeue(){
        r=f=-1;
    }
    void insertf(),void deleter(),void insertr(),void delete_f();void display();
}
void Dequeue::insertf(){
    if(f!<Max)cout<<"the queue is empty";
    else{
        if(f==-1)f++;
        r++;
        cout<<"Enter element to insert";
        cin>>arr[r];
    }
}
void Dequeue::insertr(){
    if(r!<Max)cout<<"the queue is empty";
    else{
        if(f==-1)f++;
        r++;
        cout<<"Enter element to insert";
        cin>>arr[r];
    }
}
void Dequeue::delete_f(){
    if(f==-1)cout<<"the queue is empty";
    else{
        if(f==r)f=r=-1;
        f--;
        cout<<"element deleted";
    }
}
void Dequeue deleter(){
    if(f==-1)cout<<"the queue is empty";
    if(r==f){f=r=-1;}
    else{r--;}
    cout<<"Element deleted";
}
void Dequeue::display(){
    if(f==-1)cout<<"\n Queue is empty\n";
    else{
        for (int i=f;i<=r;i++)cout<<"\n"<<arr[i];
    }
}
void main(){
    Dequeue q1;
    int choice ;char y;
    do{
        cout<<"\n choose \n1.insert rear \n2.insert front\n3.delete rear\n4.delete front\n5.display";
        cin>>choice;
        switch(choice){
            case 1: q1.insertr();break;
            case 2: q1.insertf();break;
            case 3: q1.deleter();break;
            case 4: q1.delete_f();break;
            case 5:display();
        }
        cout<<"\n Do you want to continue ?(Y/y)\n";
        cin>>y; 
    }while(y=='Y'||y=='y');
}