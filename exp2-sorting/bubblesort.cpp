#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i = n - 1; i >= 0; i--) {
        int didSwap = 0;
        for(int j = 0; j < i; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                didSwap = 1;
            }
        }
        if(didSwap == 0) {
            break;
        }
    }
}

int main() {
    int n;
    cout << "Enter size of your array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}