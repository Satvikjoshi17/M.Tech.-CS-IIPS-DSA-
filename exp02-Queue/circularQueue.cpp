#include <iostream>
using namespace std;
#define Max 10;

class Cqueue{
    int f ,r ,arr[Max];
    public:
    Cqueue(){
        f=r=-1;
    }
    void insert();void delete_e();void display();
}
void Cqueue::insert(){
    if(r==(f+1)%Max)cout<<"the queue is full";
    else{
        if(f==-1){f++;r++}
        else {
            r=(r+1)%Max;

        }
        cout<<"Insert element to enter :";
        cin>>arr[r];
    }
}
void Cqueue ::delete_e(){
    if(f==-1)cout<<"queue is empty";
    if(r<f&&r==0)r=Max-1;
    else{
        r=(r-1)%Max;
    }
    cout<<"Element deleted";
}
void Cqueue::display(){
    if(r<f){
        for(int i=f;i<Max;i++)cout<<a[i]<<"\n";
        for(int i=0;i<r+1;i++)cout<<a[i]<<"\n";
    }
    else{
        for (int i=f;i<=r;i++)cout<<a[i]<<"\n";
    }
}
int main(){
    Cqueue q1;
    int choice ;char y;
    do{
        cout<<"\n choose \n1.display \n2.insert\n3.delete\n";
        cin>>choice;
        switch(choice){
            case 1: q1.display();break;
            case 2: q1.insert();break;
            case 3: q1.delete_e();
        }
        cout<<"\n Do you want to continue ?(Y/y)\n";
        cin>>y; 
    }while(y=='Y'||y=='y');
    return 0;
}