#include <bits/stdc++.h>
using namespace std;

// Time complexity: O(log(2) n) * O(n) = O(n log(n)) log base 2 n
// Space complexity: O(n) for temp array
void merge(vector <int> &arr, int low, int mid, int high) {
    int left = low;
    int right = mid + 1;
    vector <int> temp;
    
    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}


void mS(vector <int> &arr, int low, int high) {
    if(low == high) return;
    int mid = (low + high) / 2;
    mS(arr, low, mid);
    mS(arr, mid + 1, high);
    // Merge the two sorted halves
    merge(arr, low, mid, high);
}


int main() {
    vector <int> arr = {38, 27, 43, 3, 9, 82, 10};
    int n = arr.size();
    
    mS(arr, 0, n - 1);
    
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}