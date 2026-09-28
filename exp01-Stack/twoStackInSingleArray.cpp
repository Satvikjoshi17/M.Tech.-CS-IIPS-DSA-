#include <iostream>
#define Max 10
class Mstack{
    int top1,top2,arr[Max];
    public:
    Mstack(){
        top1=-1;top2=Max;
    }
    void display1();void display2();
    void push1();void push2();
    void pop1();void pop2();
};
void Mstack::push1(){
    if(top1==top2-1){
        cout<<"\n Stack Overflow \n";
    }
    else {
        cout<<"\n enter element to push\n";
        top1++;
        cin>>arr[top1];

    }

}
void Mstack::push2(){
    if(top2-1==top1){
        cout<<"\nstack is overflow\n";
    }
    else{
        cout<<"\n Enter element to enter\n";
        top2--;
        cin>>arr[top2];
    }
}
void Mstack::pop1(){
if(top1==-1)cout<<"\n Stack is under flow\n";
else {
    top1--;
    cout<<"\n element poped \n";
}

}
void Mstack::pop2(){
if(top2==Max)cout>>"\n Stack is under flow\n";
else {
    top2++;
    cout<<"\n element poped \n";
}

}
void Mstack::display1(){
    for(int i=top1;i>=0;i--){
        cout<<arr[i]<<endl;
    }
}
void Mstack::display2(){
    for(int i=top2;i<Max;i++){
        cout<<arr[i]<<endl;
    }
}


int main(){
    Mstack s;
    int ch; char y;
    do{
        cout<<"\n choose \n1.display1 \n2.display2\n3.push1\n4.push2\n5.pop1\n6.pop2\n";
        cin>>ch;
        switch(ch){
            case 1: s.display1();break;
            case 2: s.display2();break;
            case 3: s.push1();break;
            case 4: s.push2();break;
            case 5: s.pop1();break;
            case 6: s.pop2();break;
        }
        cout<<"\n do you want to continue ? (Y/y)\n";
        cin>>y;
    }while(y=='y'||y=='Y');
    return 0;
}