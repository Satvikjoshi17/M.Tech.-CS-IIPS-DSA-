#include <iostream>
using namespace std;

// TC = O(n log(n)) log base 2 n
// SC = O(1)
int f(int arr[], int high, int low) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j) {
        while(i <= high && arr[i] <= pivot ) i++;
        while(j >= low &&arr[j] > pivot) j--;
        if(i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

    }
    int num = arr[low];
    arr[low] = arr[j];
    arr[j] = num;
    return j;
}

void quickSort(int arr[], int low, int high) {
    if(low < high) {
        int partition = f(arr, high, low);
        quickSort(arr, low, partition - 1);
        quickSort(arr, partition + 1, high);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);
    cout << "*********Sorted array*********" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "*******************************" << endl;
    return 0;
}