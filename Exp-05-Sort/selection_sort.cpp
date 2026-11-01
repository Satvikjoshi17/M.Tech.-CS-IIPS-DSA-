
#include <iostream>
using namespace std;

class Array
{
    int a[100], n;

public:
    void input();
    void selectionSort();
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

void Array::selectionSort()
{
    int minIndex, temp;

    for(int i = 0; i < n - 1; i++)
    {
        minIndex = i;

        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }

        temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
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
        cout << "\n2. Selection Sort";
        cout << "\n3. Display array";
        cout << "\nEnter choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                ar.input();
                break;

            case 2:
                ar.selectionSort();
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
