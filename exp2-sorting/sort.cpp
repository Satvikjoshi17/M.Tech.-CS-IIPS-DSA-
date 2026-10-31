// 8-14. Sort Operations.

#include <iostream>
using namespace std;

#define MAX 50

class Sort
{
private:
    int a[MAX];
    int n, j, temp;

public:
    void get();
    void display();

    void Bubble_sort();
    void selection_sort();
    void insertion_sort();

    void merge_sort(int a[], int s, int e);
    void merge(int a[], int s, int mid, int e);

    int partition(int ll, int ul);
    void quick_sort(int ll, int ul);

    void merge_sort_start();
    void quick_sort_start();

    void heapify(int n, int i);
    void heap_sort();
};

void Sort::get()
{
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void Sort::display()
{
    cout << "Sorted array: ";

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

// 8. Implement Bubble Sort.

void Sort :: Bubble_sort()
{
    for(int i =0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                int t = a[j];
                a[j] = a[j+1];
                a[j+1]=t;
            }
        }
    }
}

// 9. Implement Selection Sort.

void  Sort :: selection_sort()
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}

// 10. Implement Insertion Sort.

void Sort :: insertion_sort()
{
    for(int i=1; i<n; i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}

// 11. Implement Merge Sort.

void Sort :: merge_sort(int a[], int s, int e)
{
    if(s<e)
    {
        int mid=(s+e)/2;

        merge_sort(a, s, mid);
        merge_sort(a, mid+1, e);
        merge(a, s, mid, e);
    }
}

void Sort :: merge(int a[], int s, int mid, int e)
{
    int i,j,k;
    int l1=mid-s+1;
    int l2=e-mid;
    int left_a[MAX], right_a[MAX];
    for(int i=0; i<l1; i++)
    {
        left_a[i]=a[s+i];
    }
    for(int j=0; j<l2; j++)
    {
        right_a[j]=a[mid+1+j];
    }
    i=0;j=0;k=s;
    while(i<l1 && j<l2)
    {
        if(left_a[i]<=right_a[j])
        {
            a[k]=left_a[i];
            i++;
        }
        else{
            a[k]=right_a[j];
            j++;
        }
        k++;
    }
    while(i<l1)
    {
        a[k]=left_a[i];
        i++;
        k++;
    }
    while(j<l2)
    {
        a[k]=right_a[j];
        j++;
        k++;
    }
}

void Sort::merge_sort_start()
{
    merge_sort(a, 0, n - 1);
}

void Sort::quick_sort_start()
{
    quick_sort(0, n - 1);
}

// 12. Implement Quick Sort.

int Sort :: partition(int ll, int ul)
{
    int pe=a[ll];
    int s,e,t;
    s=ll;
    e=ul;
    while(s<e)
    {
        while(a[s]<=pe && s<ul)
        s++;
        while(a[e]>pe)
        e--;
        if(s<e)
        {
            t=a[s];
            a[s]=a[e];
            a[e]=t;
        }
    }
    t=a[e];
    a[e]=a[ll];
    a[ll]=t;
    return e;
}
void Sort :: quick_sort(int ll, int ul)
{
    int cl;
    if(ll<ul)
    {
        cl=partition(ll,ul);
        quick_sort(ll,cl-1);
        quick_sort(cl+1,ul);
    }
}

// 13. Implement Heap Sort.

void Sort::heapify(int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if(l < n && a[l] > a[largest])
    {
        largest = l;
    }

    if(r < n && a[r] > a[largest])
    {
        largest = r;
    }

    if(largest != i)
    {
        int t = a[i];
        a[i] = a[largest];
        a[largest] = t;

        heapify(n, largest);
    }
}

void Sort::heap_sort()
{
    for(int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(n, i);
    }

    for(int i = n - 1; i > 0; i--)
    {
        int t = a[0];
        a[0] = a[i];
        a[i] = t;

        heapify(i, 0);
    }
}

int main()
{
    Sort s;
    int choice;
    char ch;

    do
    {
        cout << "\n\n--- SORTING OPERATIONS ---" << endl;
        cout << "1. Bubble Sort" << endl;
        cout << "2. Selection Sort" << endl;
        cout << "3. Insertion Sort" << endl;
        cout << "4. Merge Sort" << endl;
        cout << "5. Quick Sort" << endl;
        cout << "6. Heap Sort" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        s.get();

        switch(choice)
        {
            case 1: s.Bubble_sort();
                    break;

            case 2: s.selection_sort();
                    break;

            case 3: s.insertion_sort();
                    break;

            case 4: s.merge_sort_start();
                    break;

            case 5: s.quick_sort_start();
                    break;

            case 6: s.heap_sort();
                    break;

            default: cout << "Invalid choice.";
        }

        if(choice >= 1 && choice <= 6)
        {
            s.display();
        }

        cout << "\nDo you want to continue? Press y or Y: ";
        cin >> ch;

    } while(ch == 'y' || ch == 'Y');

    return 0;
}