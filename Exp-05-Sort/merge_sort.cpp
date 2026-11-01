
#include <iostream>
using namespace std;

class Array
{
    int a[100], n;

public:
    void input();
    void mergeSort(int low, int high);
    void merge(int low, int mid, int high);
    void display();
};

void Array::input()
{
    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void Array::merge(int low, int mid, int high)
{
    int b[100];
    int i = low, j = mid + 1, k = low;

    while(i <= mid && j <= high)
    {
        if(a[i] < a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }

    while(i <= mid)
        b[k++] = a[i++];

    while(j <= high)
        b[k++] = a[j++];

    for(int i = low; i <= high; i++)
        a[i] = b[i];
}

void Array::mergeSort(int low, int high)
{
    if(low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(low, mid);
        mergeSort(mid + 1, high);

        merge(low, mid, high);
    }
}

void Array::display()
{
    cout << "Array: ";

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}

int main()
{
    Array ar;
    int ch;
    char choice;

    do
    {
        cout << "\n1. Input array";
        cout << "\n2. Merge Sort";
        cout << "\n3. Display array";
        cout << "\nEnter choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                ar.input();
                break;

            case 2:
                ar.mergeSort(0, 99); // See correction below
                break;

            case 3:
                ar.display();
                break;

            default:
                cout << "Invalid choice\n";
        }

        cout << "Continue? Press Y or y: ";
        cin >> choice;

    } while(choice == 'Y' || choice == 'y');

    return 0;
}
