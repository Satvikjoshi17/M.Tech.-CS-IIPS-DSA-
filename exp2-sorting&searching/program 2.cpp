                                                                  //(1)BUBBLE SORT
#include<iostream>
#define MAX 5
using namespace std;

class Bsort{
    int arr[MAX];
    public:
    Bsort(){
        cout<<"enter the elements"<<endl;
        for(int i=0;i<MAX;i++){
            cin>>arr[i];
        }
    }
    void search();
};

void Bsort::search(){
    for(int i = 0 ;i<MAX-1;i++){
        for(int j =0;j<MAX-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

}



                                                     //(2) SELECTION SORT PROGRAM
#include<iostream>
#define MAX 5
using namespace std;

class Ssort{
    int arr[MAX];
    public:
    Ssort(){
        cout<<"enter the elements"<<endl;
        for(int i=0;i<MAX;i++){
            cin>>arr[i];
        }
    }

    void display();
    void search();
};

void Ssort::search(){
    for(int i = 0 ;i<MAX-1;i++){
        for(int j =i+1;j<MAX;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


                                                     // (3) BINARY  SEARCH  PROGRAM
#include<iostream>
#define MAX 5
using namespace std;

class Bs{
    int arr[MAX],num,ul,ll,mid;
    public:
    Bs(){
        cout<<"enter the elements"<<endl;
        for(int i=0;i<MAX;i++){
            cin>>arr[i];
        }
    }
    void search();
};

void Bs::search(){
    cout<<"enter search element"<<endl;
    cin>>num;
    int f = 0;
    ul = MAX - 1;
    ll = 0;
    while(ll<=ul){
        mid = (ll+ul)/2;
        if(arr[mid]==num){
            f=1;
            break;
        }
        if(arr[mid]<num){
            ll = mid + 1;
        }
        else{
            ul = mid - 1;
        }
    }
    if(f==1){
            cout<<"element found at "<<mid<<endl;
        }
        else{
            cout<<"element not found"<<endl;
        }
}


                                                    // (4) LINEAR SEARCH PROGRAM
#include<iostream>
#define MAX 5
using namespace std;

class Ls{
    int arr[MAX],num;
    public:
    Ls(){
        cout<<"enter the elements"<<endl;
        for(int i=0;i<MAX;i++){
            cin>>arr[i];
        }
    }

    void display();
    void search();
};

void Ls::search(){
    cout<<"enter search element"<<endl;
    cin>>num;

    for(int i=0;i<MAX;i++){
        if(arr[i]==num){
            cout<<"element found at "<<i<<" index"<<endl;
            return;
        }
    }

    cout<<"element not found"<<endl;
}


                                                                //  (5) MERGE SORT
#include>iostream>
using namespace std;
void merge(int low,int mid,int high){
    int i = low;
    int j = mid+1;
    int k = low;
    int b[MAX];
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            b[k] = arr[i];
            i++;
        }
        else{
            b[k] = arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        b[k] = arr[i];
        i++;
        k++;
    }
    while(j<=high){
        b[k] = arr[j];
        j++;
        k++;
    }
    for(int i = low;i<=high;i++){
        arr[i] = b[i];
    }
}

void mergesort(int low ,int high){
    int mid = (low+high)/2;
    if(low<high){
        mergesort(low,mid);
        mersort(mid+1,high);
        merge(low,mid ,high);
    }
} 


                                                                //  (6) QUICK SORT
#include<iostream>
using namespace std;

#define MAX 10

int arr[MAX];

int partition(int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++) {
        if(arr[j] <= pivot) {
            i++;

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quickSort(int low, int high) {
    if(low < high) {
        int p = partition(low, high);

        quickSort(low, p - 1);
        quickSort(p + 1, high);
    }
}


                                                   //  (7) INDEX SEQUENTIAL SEARCH 
#include<iostream>
using namespace std;

#define step 3
#define MAX 10
#define size ((MAX+step-1)/step)

int arr[MAX];

void iss() {
    int k;
    cout << "Enter the element to search" << endl;
    cin >> k;

    int ele[size], indices[size], i;
    int j = 0, ind = 0, start = 0, end = MAX;

    for(i = 0; i < MAX; i = i + step) {
        ele[ind] = arr[i];
        indices[ind] = i;
        ind++;
    }

    if(k < ele[0]) {
        cout << "Element not found" << endl;
        return;
    }
    else {
        for(i = 1; i < ind; i++) {
            if(k < ele[i]) {
                start = indices[i-1];
                end = indices[i];
                break;
            }
        }

        if(i == ind) {
            start = indices[ind-1];
            end = MAX;
        }

        for(i = start; i < end; i++) {
            if(k == arr[i]) {
                j = 1;
                cout << "Element found at index " << i << endl;
                break;
            }
        }

        if(j == 0) {
            cout << "Element not found" << endl;
        }
    }
}


                                                               //   (8) RADIX SORT
#include<iostream>
using namespace std;

void radixsort() {
    int i, b[MAX], pos = 1, bucket[10], maxi;

    maxi = arr[0];

    for(int i = 0; i < MAX; i++) {
        if(arr[i] > maxi) {
            maxi = arr[i];
        }
    }

    for(pos = 1; maxi / pos > 0; pos *= 10) {
        for(i = 0; i < 10; i++) {
            bucket[i] = 0;
        }

        for(i = 0; i < n; i++) {
            bucket[(arr[i] / pos) % 10]++;
        }

        for(i = 1; i < 10; i++) {
            bucket[i] = bucket[i] + bucket[i - 1];
        }

        for(i = n - 1; i >= 0; i--) {
            b[--bucket[(arr[i] / pos) % 10]] = arr[i];
        }

        for(i = 0; i < n; i++) {
            arr[i] = b[i];
        }
    }
}



                                                            //  (9) INSERTION SORT
#include<iostream>
#define MAX 5
using namespace std;

int main() {
    int arr[MAX], i, j, key;

    cout << "Enter the elements" << endl;
    for(i = 0; i < MAX; i++) {
        cin >> arr[i];
    }

    for(i = 1; i < MAX; i++) {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    cout << "Sorted array is: " << endl;
    for(i = 0; i < MAX; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}