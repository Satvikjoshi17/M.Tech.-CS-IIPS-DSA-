#include <iostream>
#include <conio.h>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == key) {
            return mid;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    // Applicable to sorted array
    cout << "Enter your elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cout << "Enter key: ";
    cin >> key;
    int result = binarySearch(arr, n, key);
    cout << "Element found at: " << result << " index" << endl;
    return 0;
}