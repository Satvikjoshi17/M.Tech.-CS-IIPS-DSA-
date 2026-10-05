#include<iostream>
#include<conio.h>
#include<algorithm>
using namespace std;
#define max 5
class bs
{
   public:
   int arr[max] , f , key , mid , low , high ;

   bs(){
    cout<<"enter elements";
    for(int i=0;i<max;i++)
    {
        cin>>arr[i];
    }
   // low = 0 ; high = max - 1 ; f = 0 ;
   }

   void display()
   {
    cout<<"elements are ";
    for(int i=0;i<max;i++)
    {
        cout<<arr[i]<<" ";
    }
   }

    void search()
    {
      cout<<"enter key to be searched";
      cin>>key;
      low = 0 ; high = max - 1 ; f = 0 ;
      while(low <= high)
      {
          mid = (low + high)/2 ;
          if(arr[mid] == key)
          {
              f = 1 ;
              cout<<"element found at "<<mid+1<<" position";
              break ;
          }
          else if(arr[mid] < key)
          {
              low = mid + 1 ;
          }
          else
          {
              high = mid - 1 ;
          }
      }
      if( f==1 ) {cout<<"element found at "<<mid+1<<" position"<<endl;}
      else
      cout<<"element not found"<<endl;;
    }
};

int main()
{
    bs b ;
    int choice ; char c ;
    do{
        cout<<"1. display"<<endl;
        cout<<"2. search"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>choice ;
        switch(choice)
        {
            case 1 : b.display() ; break ;
            case 2 : b.search() ; break ;
            default : cout<<"invalid choice";
        }
        cout<<"do you want to continue (y/n)"<<endl;
        cin>>c ;
} while(c=='y' || c=='Y');
}