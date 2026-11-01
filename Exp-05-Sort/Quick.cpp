
#include <iostream>
using namespace std;

class Array
{
    int a[100], n;

public:
    void input();
    void quickSort(int low, int high);
    int partition(int low, int high);
    void sort();
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

int Array::partition(int low, int high)
{
    int pivot = a[high];
    int i = low - 1;
    int temp;

    for(int j = low; j < high; j++)
    {
        if(a[j] < pivot)
        {
            i++;

            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;

    return i + 1;
}

void Array::quickSort(int low, int high)
{
    if(low < high)
    {
        int p = partition(low, high);

        quickSort(low, p - 1);
        quickSort(p + 1, high);
    }
}

void Array::sort()
{
    quickSort(0, n - 1);
    cout << "Array sorted successfully\n";
}

void Array::display()
{
    cout << "Sorted array: ";

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

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
        cout << "\n2. Quick Sort";
        cout << "\n3. Display array";
        cout << "\nEnter choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                ar.input();
                break;

            case 2:
                ar.sort();
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

