#include<iostream>
using namespace std ;

# define MAX 8 

class LS
{
  int a[MAX] , num , i;
  public :
  
  LS()
  {
    cout<<"Enter elements ";
    for(int i = 0 ; i < MAX ; i++ )
    { cin>> a[i] ;}
  }

  void display()
  {
    cout<<"Elements are :";
    for( int i = 0 ; i < MAX ; i++ )
    { cout<< a[i]<<" " ; }
    cout<<endl;
  }
  void search()
  {
    cout<<"enter element to be searched "; 
    cin>>num;
    for(  i = 0 ; i < MAX ; i++ )
    {
      if( a[i] == num  ) break ;
    }
    if( i == MAX ) cout<<" Element not found";
    else cout<<"Element found at index "<<i<<" "<<"and position "<<i+1<<endl;
  }
};
int main()
{
    LS l ;
    int choice ; char c ;
    do{
        cout<<"1. display"<<endl;
        cout<<"2. search"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>choice ;
        switch(choice)
        {
            case 1 : l.display() ; break ;
            case 2 : l.search() ; break ;
            default : cout<<"invalid choice";
        }
        cout<<"do you want to continue (y/n)"<<endl;
        cin>>c ;
} while(c=='y' || c=='Y');
}