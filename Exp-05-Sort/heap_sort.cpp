
#include <iostream>
using namespace std;

class Array
{
    int a[100], n;

public:
    void input();
    void heapify(int n, int i);
    void heapSort();
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

void Array::heapify(int size, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int temp;

    if(left < size && a[left] > a[largest])
        largest = left;

    if(right < size && a[right] > a[largest])
        largest = right;

    if(largest != i)
    {
        temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;

        heapify(size, largest);
    }
}

void Array::heapSort()
{
    int temp;

    // Build a max heap
    for(int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(n, i);
    }

    // Move the largest element to the end
    for(int i = n - 1; i > 0; i--)
    {
        temp = a[0];
        a[0] = a[i];
        a[i] = temp;

        heapify(i, 0);
    }

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
        cout << "\n2. Heap Sort";
        cout << "\n3. Display array";
        cout << "\nEnter choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                ar.input();
                break;

            case 2:
                ar.heapSort();
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
