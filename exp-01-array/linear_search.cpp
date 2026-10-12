#include <iostream>
#define MAX 5
using namespace std;
class LS
{
    int a[MAX],x;
    public:LS()
    {
        cout<<"enter values in the array: ";
        for(int i=0;i<MAX;i++)
        {
            cin>>a[i];
        }

    }
    void display()
    {
        cout<<"Array elements: ";
        for(int i=0;i<MAX;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    void search();
};
void LS::search()
{    
    int i;
    cout<<"Enter a value to search: ";
    cin>>x;
    for(i=0;i<MAX;i++)
    {
        if(a[i]==x)
        {
            break;
        }
    }
    if(i==MAX)
    cout<<x<<" not found in the array";
    else
    {
     cout<<x<<" found at index "<<i;
    }
}
int main()
{
    LS l;
    l.display();
    l.search();
    return 0;
}