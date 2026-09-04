#include <iostream.h>
#define Max 10
class Queue{
    int arr[Max],f,r;
    public:
    Queue(){
        f=-1;r=-1;
    }
    void insert();void display();void delete_e();
};
void Queue :: insert(){
    if(r==Max-1){cout<<"\n Queue is full\n";}
    else{
        if(f==-1)f++;
        r++;
        cout<<"\nenter element to insert \n";
        cin>>arr[r];
    }
}
void Queue:: delete_e(){
    if(f==-1)cout<<"\nqueue is empty\n";
    else{
        if(f==r){
            int e=arr[r];
            f=r=-1;
            cout<<"\n element "<<e<<" deleted\n";
        }
        else {
            int e=arr[f];f++;
            cout<<"\n element "<<e<<" deleted\n";
        }
    }
}
void Queue::display(){
    if(f==-1)cout<<"\n Queue is empty\n";
    else{
        for (int i=f;i<=r;i++)cout<<"\n"<<arr[i];
    }
}

int main(){
    Queue q1;
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