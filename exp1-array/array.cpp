// 1-7. Array Operations.

#include <iostream>
using namespace std;
#define MAX 50
class Array
{
private:
    int a[MAX];
    int temp[MAX];
    int size;

public:
    void get(); void put();
    void insertion();
    void deletion();
    void linearSearch();
    void binarySearch();
    void largest(); void smallest();
    void reverseArray();
    void mergeArrays();
};

void Array::get()
{
    cout << "Enter size of array: ";
    cin >> size;

    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
}

void Array::put()
{
    cout << "Array elements are: ";
    for(int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

// 1. Write a program to perform insertion in an array. 

void Array::insertion()
{
    int p, d;

    cout << "Enter insertion position and data: ";
    cin >> p >> d;

    for(int i = size - 1; i >= p - 1; i--)
    {
        a[i + 1] = a[i];
    }

    a[p - 1] = d;
    size++;
}

// 2. Write a program to delete an element from an array.

void Array::deletion()
{
    int d;

    cout << "Enter element to delete: ";
    cin >> d;

    for(int i = 0; i < size; i++)
    {
        if(a[i] == d)
        {
            for(int j = i; j < size - 1; j++)
            {
                a[j] = a[j + 1];
            }

            size--;

            cout << "Element deleted successfully." << endl;
            return;
        }
    }

    cout << "Element not found." << endl;
}

// 3. Search an element in an array using Linear Search.

void Array::linearSearch()
{
    int num, i;

    cout << "Enter search element: ";
    cin >> num;

    for(i = 0; i < size; i++)
    {
        if(a[i] == num)
        {
            break;
        }
    }

    if(i == size)
    {
        cout << "Element not found.";
    }
    else
    {
        cout << "Element found at " << i + 1 << " position.";
    }
}

// 4. Search an element using Binary Search.

void Array::binarySearch()
{
    int num;
    int l = 0, u = size - 1, mid;
    int f = 0;
    int t;

    // Copy original array into temporary array
    for(int i = 0; i < size; i++)
    {
        temp[i] = a[i];
    }

    // Sort temporary array
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1 - i; j++)
        {
            if(temp[j] > temp[j + 1])
            {
                t = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = t;
            }
        }
    }

    cout << "Sorted array: ";
    for(int i = 0; i < size; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;

    cout << "Enter element to search: ";
    cin >> num;

    while(l <= u)
    {
        mid = (l + u) / 2;

        if(temp[mid] == num)
        {
            f = 1;
            break;
        }
        else if(temp[mid] < num)
        {
            l = mid + 1;
        }
        else
        {
            u = mid - 1;
        }
    }

    if(f == 1)
    {
        cout << "Element found at " << mid + 1 << " position.";
    }
    else
    {
        cout << "Element not found.";
    }
}

// 5. Find the largest and smallest element in an array.

void Array::largest()
{
    int maximum = a[0];

    for(int i = 1; i < size; i++)
    {
        if(a[i] > maximum)
        {
            maximum = a[i];
        }
    }

    cout << "Largest element = " << maximum << endl;
}

void Array::smallest()
{
    int minimum = a[0];

    for(int i = 1; i < size; i++)
    {
        if(a[i] < minimum)
        {
            minimum = a[i];
        }
    }

    cout << "Smallest element = " << minimum << endl;
}

// 6. Reverse the elements of an array.

void Array::reverseArray()
{
    int t;

    for(int i = 0; i < size / 2; i++)
    {
        t = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1 - i] = t;
    }

    cout << "Array reversed successfully." << endl;
}

// 7. Merge two sorted arrays into a single sorted array.

void Array::mergeArrays()
{
    int a1[MAX], a2[MAX], c[2 * MAX];
    int n1, n2;
    int i = 0, j = 0, k = 0;

    cout << "Enter size of first sorted array: ";
    cin >> n1;

    cout << "Enter elements of first sorted array: ";
    for(int x = 0; x < n1; x++)
    {
        cin >> a1[x];
    }

    cout << "Enter size of second sorted array: ";
    cin >> n2;

    cout << "Enter elements of second sorted array: ";
    for(int x = 0; x < n2; x++)
    {
        cin >> a2[x];
    }

    while(i < n1 && j < n2)
    {
        if(a1[i] < a2[j])
        {
            c[k] = a1[i];
            i++;
        }
        else
        {
            c[k] = a2[j];
            j++;
        }
        k++;
    }

    while(i < n1)
    {
        c[k] = a1[i];
        i++;
        k++;
    }

    while(j < n2)
    {
        c[k] = a2[j];
        j++;
        k++;
    }

    cout << "Merged sorted array: ";
    for(int x = 0; x < k; x++)
    {
        cout << c[x] << " ";
    }

    cout << endl;
}

int main()
{
    Array obj;
    int choice;
    char c;

    obj.get();

    do
    {
        cout << "\n\n--- ARRAY OPERATIONS ---" << endl;
        cout << "1. Insertion" << endl;
        cout << "2. Deletion" << endl;
        cout << "3. Linear Search" << endl;
        cout << "4. Binary Search" << endl;
        cout << "5. Find Largest and Smallest" << endl;
        cout << "6. Reverse Array" << endl;
        cout << "7. Merge Two Sorted Arrays" << endl;
        cout << "8. Display Array" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:obj.insertion();
                   break;

            case 2:obj.deletion();
                   break;

            case 3:obj.linearSearch();
                   break;

            case 4:obj.binarySearch();
                   break;

            case 5:obj.largest();
                   obj.smallest();
                   break;

            case 6:obj.reverseArray();
                   break;

            case 7:obj.mergeArrays();
                   break;

            case 8:obj.put();
                   break;

            default:cout << "Invalid choice.";
        }

        cout<<"\n Do you want to continue? Press y or Y";
        cin>>c;

    } while(c=='y' || c=='Y');

    return 0;

}