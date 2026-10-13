#include<iostream>
#define MAX 50
using namespace std;

class Array{
    int arr[MAX];
    int size;
    int temp[MAX];
    public:
    void get();
    void put();
    void insertion();
    void deletee();
    void linearsearch();
    void binarysearch();
    void largest();
    void smallest();
    void reverse();
};

//                              (1) 
void Array::get(){
    cout<<"enter the size of the array"<<endl;
    cin>>size;
     cout<<"enter the elements";
     for(int i = 0;i<size;i++){
        cin>>arr[i];
     }
}

//                               (2)
void Array::put(){
    cout<<"the elements of the array are:-"<<endl;
    for(int i = 0;i<size;i++){
        cout<<arr[i];
    }
    cout<<endl;
}

//                               (3)
void Array::insertion(){
    int p,d;
    cout<<"enter the position at which u want to insert"<<endl;
    cin>>p;
    cout<<"enter the data which u want to insert"<<endl;
    cin>>d;
    for(int i = size - 1; i >= p - 1; i--)
    {
        a[i + 1] = a[i];
    }

    a[p - 1] = d;
    size++;
}

//                             (4)
void Array::deletee(){
    int x;
    cout<<"enter the element u want to delete"<<endl;
    cin>>x;
    for(int i = 0;i<size;i++){
        if(arr[i]==x){
            for(int j = i;j<size-1;j++){
                a[j] = a[j+1];
            }
            size--;
            cout<<"element deleted succcessfully"<<endl;
            return;
        }
    }
    cout<<"element not found"<<endl;
}

//                               (5)
void Array::linearsearch(){
    int x;
    cout<<"enter the number u want to search"<<endl;
    cin>>x;
    for(int i = 0;i<size;i++){
        if(arr[i]==x){
            return i;
        }
    }
    cout<<"element not found"<<endl;
}

//                               (6)
void Array::binarysearch(){
    int x;
    cout<<"enter the element u want to search"<<endl;
    cin>>x;
    int l = 0;
    int h = size-1;
    while(l<=h){
        int mid = l + (h-l) / 2;
        if(arr[mid]==x){
            return mid;
        }
        if(arra[mid]<x){
            l = mid +1;
        }
        else{
            h = mid -1;
        }
    }
    cout<<"element not found"<<endl;
}

//                             (7)
void Array::largest(){
    int maxi;
    maxi = arr[0];
    for(int i = 0;i<size;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    cout<<"the largest element is "<<maxi<<endl;
}

//                              (8)
void Array::smallest(){
    int mini;
    mini = arr[0];
    for(inti = 0;i<size;i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
    }
    cout<<"minimum or smallest element is "<<mini<<endl;
}

//                              (9)
void Array::reverse(){
    int x;

    for(int i = 0; i < size / 2; i++)
    {
        x = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1 - i] = x;
    }

    cout << "Array is reversed." << endl;
}


int main()
{
    Array a1;
    int choice;
    char c;

    do
    {
        cout << "\n\n--- MENU ---" << endl;
        cout << "1. Insertion" << endl;
        cout << "2. Deletion" << endl;
        cout << "3. Linear Search" << endl;
        cout << "4. Binary Search" << endl;
        cout << "5. Find Largest "<<endl;
        cout<< " 6.Smallest" << endl;
        cout << "7. Reverse Array" << endl;
        cout << "9. Display Array" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:a1.insertion();
                   break;

            case 2:a1.deletee();
                   break;

            case 3:a1.linearsearch();
                   break;

            case 4:a1.binarysearch();
                   break;

            case 5:a1.largest();
                   break;

            case 6:a1.smallest();
                   break;

            case 7:a1.smallest();
                   break;

            case 8:a1.reverse();
                   break;

            case 9:a1.put();
                   break;

            default:cout << "Invalid choice.";
        }

        cout<<"\n Do you want to continue? Press y or Y";
        cin>>c;

    } while(c=='y' || c=='Y');

    return 0;

}
